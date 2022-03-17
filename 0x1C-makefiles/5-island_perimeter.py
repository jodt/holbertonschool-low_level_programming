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
    for i in range(0, len(grid)):
        for j in range(0, (len(grid[0]))):
            if grid[i][j] == 1:
                if i == 0 or (grid[i-1][j]) == 0:
                    perimeter += 1
                if j == 0 or (grid[i][j-1]) == 0:
                    perimeter += 1
                if j == len(grid[0])-1 or (grid[i][j+1]) == 0:
                    perimeter += 1
                if i == len(grid)-1 or (grid[i+1][j]) == 0:
                    perimeter += 1
    return perimeter
