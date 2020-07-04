#!/usr/bin/python3
""" 5- island_perimeter
    """


def island_perimeter(grid):
    """island_perimeter

    Args:
        grid (list): the date in the list is intergert
    Returns:
        [int]: perimeter
    """

    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i-1][j] == 0 or i == 0:
                    count += 1
                if grid[i+1][j] == 0 or i == len(grid) - 1:
                    count += 1
                if grid[i][j+1] == 0 or j == len(grid[i]) - 1:
                    count += 1
                if grid[i][j-1] == 0:
                    count += 1
    return count
