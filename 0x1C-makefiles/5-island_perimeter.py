#!/usr/bin/python3
"""Module for task 5"""


def island_perimeter(grid):
    """Mthd that returns the perimeter of the island desc in grid
    Args:
    grid: the grid"""
    total = 0

    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell:
                total += 4
                if i > 0 and grid[i - 1][j]:
                    total -= 2

                if j > 0 and grid[i][j - 1]:
                    total -= 2

    return total
