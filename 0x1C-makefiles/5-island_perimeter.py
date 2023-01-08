#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """Return the perimeter of an island.
    The grid represents 0 for water and 1 for land.
    grid : a list of integers
    Returns: the perimeter of the island defined in grid """

    larg = 0
    siz = 0

    for j in range(len(grid)):
        for l in range(len(grid[0])):
            if grid[j][l] == 1:
                siz += 1
                if (l > 0 and grid[j][l - 1] == 1):
                    larg += 1
                if (j > 0 and grid[j - 1][l] == 1):
                    larg += 1
    return 4 * siz - larg * 2
