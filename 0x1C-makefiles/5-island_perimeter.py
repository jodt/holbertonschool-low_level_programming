#!/usr/bin/python3
def island_perimeter(grid):
    if (len(grid) > 100):
        return
    for l in grid:
        if len(l) > 100:
            return
    perimeter = 0
    for i in range(1, len(grid)):
        for j in range(1, len(grid)):
            if grid[i][j] == 1:
                if (grid[i-1][j]) == 0:
                    perimeter += 1
                if (grid[i][j-1]) == 0:
                    perimeter += 1
                if (grid[i][j+1]) == 0:
                    perimeter += 1
                if (grid[i+1][j]) == 0:
                    perimeter += 1
    return perimeter
