# Moonpower Maze

![logo](https://github.com/bchen528/cg_maze/blob/master/screenshots/moonpowermaze.png)

---

### Description
A maze created in SDL2 and using raycasting to render textures

### Usage
Type `make` in a terminal screen or compile with
```
gcc main.cpp -w -Iheaders -lSDL2 -lSDL2_image -lSDL2_mixer -o the_maze
./the_maze
```

#### Controls

* Movement
    * Forward      = W or (Arrow UP)
    * Rotate Left  = A or (Arrow LEFT)
    * Backward     = S or (Arrow DOWN)
    * Rotate Right = D or (Arrow RIGHT)
    * Speed Boost  = while holding down (LEFT_SHIFT)

* Options
    * Music off = "-" (MINUS)
    * Music on  = "=" (EQUALS)
    * Exit maze program   = ESC

### Future implementations
- [ ] Rain
- [ ] Minimap
- [ ] Weapons
- [ ] Enemies
- [ ] More Music Options
- [ ] More Maps

### Contributors
* [Artur Adamian](https://github.com/arturadamian)
* [Becky Chen](https://github.com/bchen528)
* [Leon Cheung](https://github.com/hiddenjem245)