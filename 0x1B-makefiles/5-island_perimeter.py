#!/usr/bin/python3
"""calculate island perimeter"""

def island_perimeter(grid):
    """find perimeter of island
    Args:
        grid (list of lists): contains 1 representing land and 0 representing water
    Returns:
        perimeter of land
    """
    if grid is not None and grid != [[]]:
        perimeter = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    if j - 1 >= 0 and grid[i][j - 1] != 1:
                        perimeter += 1
                    if j + 1 <= len(grid[i]) - 1 and grid[i][j + 1] != 1:
                        perimeter += 1
                    if i - 1 >= 0 and grid[i - 1][j] != 1:
                        perimeter += 1
                    if i + 1 <= len(grid) - 1 and grid[i + 1][j] != 1:
                        perimeter += 1
        return perimeter
