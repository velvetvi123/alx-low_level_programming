#!/usr/bin/python3
"""Module 5-island_perimeter"""


def island_perimeter(grid):
    """Calculates the perimeter of the island represented in the grid"""
    perimeter = 0
    max_row = len(grid) - 1
    max_col = len(grid[0]) - 1

    for row_index, row in enumerate(grid):
        for col_index, cell in enumerate(row):
            if cell == 1:
                if row_index == 0 or grid[row_index - 1][col_index] == 0:
                    perimeter += 1
                if col_index == 0 or grid[row_index][col_index - 1] == 0:
                    perimeter += 1
                if col_index == max_col or grid[row_index][col_index + 1] == 0:
                    perimeter += 1
                if row_index == max_row or grid[row_index + 1][col_index] == 0:
                    perimeter += 1
    return perimeter

