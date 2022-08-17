#!/usr/bin/python3
"""first line contains this element"""


def new_water(grid, i, j):
    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j - 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Return the perimeter of grid"""
    size = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                size += new_water(grid, i, j)

    return (size)
