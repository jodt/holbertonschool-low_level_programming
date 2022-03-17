#!/usr/bin/python3
"""
This is the island_perimter module
"""


def island_perimeter(grid):
    """
    This function returns the perimeter of the island

    Parameters:
    grid (list) : list of list of integers
    """
    perimeter = 0
    for i in range(1, len(grid)-1):
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
