#!/usr/bin/python3
"""first line contains this element"""

def island_perimeter(grid):
    """Return the perimeter of grid"""
    size = 0

    for i in grid:
        for j in i:
            if j == 1:
                size += 1

    return (size * 2) + 2
