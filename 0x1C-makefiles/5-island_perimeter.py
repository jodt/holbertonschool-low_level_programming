#!/usr/bin/python3
"""
This is the island_perimter module
"""


def island_perimeter(grid):
    """
    This function returns the perimeter of the island

    Parameters:
    grid (list) : list of list of integers
                0 represents a water zone
                1 represents a land zone
                One cell is a square with side length 1
                Grid cells are connected horizontally/vertically.
                Grid is rectangular, width and height don’t exceed 100
                Grid is completely surrounded by water,
                and there is one island (or nothing).
    """
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
