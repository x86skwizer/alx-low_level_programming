#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    """perimeter of the island described in grid"""
    res = 0
    for j in range(len(grid)):
        for i in range(len(grid[j])):
            if grid[j][i] == 1:
                if j != 0 and grid[j - 1][i] == 0:
                    res = res + 1
                if i != 0 and grid[j][i - 1] == 0:
                    res = res + 1
                if j != len(grid) - 1 and grid[j + 1][i] == 0:
                    res = res + 1
                if i != len(grid[j]) - 1 and grid[j][i + 1] == 0:
                    res = res + 1
    return res
