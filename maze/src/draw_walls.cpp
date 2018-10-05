#include "headers/maze.h"

/**
 * drawPicWalls - draw textured walls
 */
void drawPicWalls()
{
    uint32_t buffer[SCREEN_HEIGHT][SCREEN_WIDTH]; //buffer for textures
    
    for(int x = 0; x < SCREEN_WIDTH; x++)
    {
        //calculate ray position and direction
        double cameraX = 2 * x / double(SCREEN_WIDTH) - 1; //x-coordinate in camera space
        double rayPosX = posX;
        double rayPosY = posY;
        double rayDirX = dirX + planeX * cameraX;
        double rayDirY = dirY + planeY * cameraX;
        
        //which box of the map we're in
        int mapX = int(rayPosX);
        int mapY = int(rayPosY);
        
        //length of ray from current position to next x or y-side
        double sideDistX;
        double sideDistY;
        
        //length of ray from one x or y-side to next x or y-side
        double deltaDistX = abs(1 / rayDirX);
        double deltaDistY = abs(1 / rayDirY);
        double perpWallDist;
        
        //what direction to step in x or y-direction (either +1 or -1)
        int stepX;
        int stepY;
        
        int hit = 0; //was there a wall hit?
        int side = 0; //was a NS or a EW wall hit?
        
        //calculate step and initial sideDist
        if (rayDirX < 0)
        {
            stepX = -1;
            sideDistX = (posX - mapX) * deltaDistX;
        }
        else
        {
            stepX = 1;
            sideDistX = (mapX + 1.0 - posX) * deltaDistX;
        }
        if (rayDirY < 0)
        {
            stepY = -1;
            sideDistY = (posY - mapY) * deltaDistY;
        }
        else
        {
            stepY = 1;
            sideDistY = (mapY + 1.0 - posY) * deltaDistY;
        }
        
        //perform DDA
        while (hit == 0)
        {
            //jump to next map square, OR in x-direction, OR in y-direction
            if (sideDistX < sideDistY)
            {
                sideDistX += deltaDistX;
                mapX += stepX;
                side = 0;
            }
            else
            {
                sideDistY += deltaDistY;
                mapY += stepY;
                side = 1;
            }
            
            //check if ray has hit a wall
            
            if (switch_map == 0) {
                if (worldMap[mapX][mapY] > 0)
                    hit = 1;
            } else {
                if (world2Map[mapX][mapY] > 0)
                    hit = 1;
            }
        }
        
        //calculate distance projected on camera direction (Euclidean distance will give fisheye effect!)
        if (side == 0)
            perpWallDist = (mapX - posX + (1 - stepX) / 2) / rayDirX;
        else
            perpWallDist = (mapY - posY + (1 - stepY) / 2) / rayDirY;
        
        //calculate height of line to draw on screen
        int lineHeight = (int)(SCREEN_HEIGHT / perpWallDist);
        
        //calculate lowest and highest pixel to fill in current wall slice
        int drawStart = -lineHeight / 2 + SCREEN_HEIGHT / 2;
        if(drawStart < 0)
            drawStart = 0;
        int drawEnd = lineHeight / 2 + SCREEN_HEIGHT / 2;
        if(drawEnd >= SCREEN_HEIGHT)
            drawEnd = SCREEN_HEIGHT - 1;
        
        //texturing calculations
        int texNum = 0;
        if (switch_map == 0)
            texNum = worldMap[mapX][mapY]; //1 subtracted from it so that texture 0 can be used!
        else
            texNum = world2Map[mapX][mapY];
        
        //calculate value of wallX
        double wallX; //where exactly the wall was hit
        if (side == 0)
            wallX = posY + perpWallDist * rayDirY;
        else
            wallX = posX + perpWallDist * rayDirX;
        wallX -= (int)wallX;
        
        //x coordinate on the texture
        int texX = int(wallX * double(texWidth));
        if(side == 0 && rayDirX > 0)
            texX = texWidth - texX - 1;
        if(side == 1 && rayDirY < 0)
            texX = texWidth - texX - 1;
        
        
        for(int y = drawStart; y < drawEnd; y++)
        {
            int d = y * 256 - SCREEN_HEIGHT * 128 + lineHeight * 128;  //avoid floats with 256, 128 factors

            int texY = ((d * texHeight) / lineHeight) / 256;
            
            uint32_t color = aTexture[texNum][texX][texY];
            
            //make color darker for y-sides: R, G and B byte each divided through two with a "shift" and an "and"
            if(side == 1)
                color = (color >> 1) & 8355711;
            
            buffer[y][x] = color;
            
        }
        
        //FLOOR CASTING
        double floorXWall, floorYWall; //x, y position of the floor texel at the bottom of the wall
        
        //4 different wall directions possible
        if(side == 0 && rayDirX > 0)
        {
            floorXWall = mapX;
            floorYWall = mapY + wallX;
        }
        else if(side == 0 && rayDirX < 0)
        {
            floorXWall = mapX + 1.0;
            floorYWall = mapY + wallX;
        }
        else if(side == 1 && rayDirY > 0)
        {
            floorXWall = mapX + wallX;
            floorYWall = mapY;
        }
        else
        {
            floorXWall = mapX + wallX;
            floorYWall = mapY + 1.0;
        }
        
        double distWall, distPlayer, currentDist;
        
        distWall = perpWallDist;
        distPlayer = 0.0;
        
        if (drawEnd < 0) drawEnd = SCREEN_HEIGHT; //becomes < 0 when the integer overflows
        
        //draw the floor from drawEnd to the bottom of the screen
        for(int y = drawEnd + 1; y < SCREEN_HEIGHT; y++)
        {
            currentDist = SCREEN_HEIGHT / (2.0 * y - SCREEN_HEIGHT); //you could make a small lookup table for this instead
            
            double weight = (currentDist - distPlayer) / (distWall - distPlayer);
            
            double currentFloorX = weight * floorXWall + (1.0 - weight) * posX;
            double currentFloorY = weight * floorYWall + (1.0 - weight) * posY;
            
            int floorTexX, floorTexY;
            floorTexX = int(currentFloorX * texWidth) % texWidth;
            floorTexY = int(currentFloorY * texHeight) % texHeight;
            
            //floor
            buffer[y][x] = aTexture[0][floorTexX][floorTexY];
            //ceiling (symmetrical!)
            buffer[SCREEN_HEIGHT - y][x] = aTexture[0][floorTexY] [floorTexX];
        }
    }
    drawBuffer(buffer[0]);
    for(int x = 0; x < SCREEN_WIDTH; x++)
        for(int y = 0; y < SCREEN_HEIGHT; y++)
            buffer[y][x] = 0;
}

/**
 * drawColorWalls - draw flat color walls
 */
//remember to clearScreen() after fx call in main
void drawColorWalls()
{
    for(int x = 0; x < SCREEN_WIDTH; x++)
    {
        //calculate ray position and direction
        double cameraX = 2 * x / double(SCREEN_WIDTH) - 1; //x-coordinate in camera space
        double rayPosX = posX;
        double rayPosY = posY;
        double rayDirX = dirX + planeX * cameraX;
        double rayDirY = dirY + planeY * cameraX;
        
        //which box of the map we're in
        int mapX = int(rayPosX);
        int mapY = int(rayPosY);
        
        //length of ray from current position to next x or y-side
        double sideDistX;
        double sideDistY;
        
        //length of ray from one x or y-side to next x or y-side
        double deltaDistX = abs(1 / rayDirX);
        double deltaDistY = abs(1 / rayDirY);
        double perpWallDist;
        
        //what direction to step in x or y-direction (either +1 or -1)
        int stepX;
        int stepY;
        
        int hit = 0; //was there a wall hit?
        int side = 0; //was a NS or a EW wall hit?
        
        //calculate step and initial sideDist
        if (rayDirX < 0)
        {
            stepX = -1;
            sideDistX = (posX - mapX) * deltaDistX;
        }
        else
        {
            stepX = 1;
            sideDistX = (mapX + 1.0 - posX) * deltaDistX;
        }
        if (rayDirY < 0)
        {
            stepY = -1;
            sideDistY = (posY - mapY) * deltaDistY;
        }
        else
        {
            stepY = 1;
            sideDistY = (mapY + 1.0 - posY) * deltaDistY;
        }
        
        //perform DDA
        while (hit == 0)
        {
            //jump to next map square, OR in x-direction, OR in y-direction
            if (sideDistX < sideDistY)
            {
                sideDistX += deltaDistX;
                mapX += stepX;
                side = 0;
            }
            else
            {
                sideDistY += deltaDistY;
                mapY += stepY;
                side = 1;
            }
            //Check if ray has hit a wall
            if (switch_map == 0) {
                if (worldMap[mapX][mapY] > 0) hit = 1;
            } else {
                if (world2Map[mapX][mapY] > 0) hit = 1;
            }
        }
        //Calculate distance projected on camera direction (Euclidean distance will give fisheye effect!)
        if (side == 0) perpWallDist = (mapX - posX + (1 - stepX) / 2) / rayDirX;
        else           perpWallDist = (mapY - posY + (1 - stepY) / 2) / rayDirY;
        
        //Calculate height of line to draw on screen
        int lineHeight = (int)(SCREEN_HEIGHT / perpWallDist);
        
        //calculate lowest and highest pixel to fill in current stripe
        int drawStart = -lineHeight / 2 + SCREEN_HEIGHT / 2;
        if(drawStart < 0)drawStart = 0;
        int drawEnd = lineHeight / 2 + SCREEN_HEIGHT / 2;
        if(drawEnd >= SCREEN_HEIGHT)drawEnd = SCREEN_HEIGHT - 1;
        
        //choose wall color
        ColorRGB color;
        if (switch_map == 0)
        {
            switch(worldMap[mapX][mapY])
            {
                case 1:  color = RGB_Red;  break; //red
                case 2:  color = RGB_Green;  break; //green
                case 3:  color = RGB_Blue;   break; //blue
                case 4:  color = RGB_White;  break; //white
                default: color = RGB_Yellow; break; //yellow
            }
        }
        else
        {
            switch(world2Map[mapX][mapY])
            {
                case 1:  color = RGB_Red;  break; //red
                case 2:  color = RGB_Green;  break; //green
                case 3:  color = RGB_Blue;   break; //blue
                case 4:  color = RGB_White;  break; //white
                default: color = RGB_Yellow; break; //yellow
            }
        }
        
        //give x and y sides different brightness
        if (side == 1) {color = color / 2;}
        
        //draw the pixels of the stripe as a vertical line
        verLine(x, drawStart, drawEnd, color);
    }
}
