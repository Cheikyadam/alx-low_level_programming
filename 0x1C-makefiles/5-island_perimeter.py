#!/usr/bin/python3


def island_perimeter(grid):
    """Island perimeter"""

    number_1 = number_1_grid(grid)
    if number_1 == 0:
        return 0
    elif number_1 == 1:
        return 4
    else:
        p = 4
        for i in range(1, number_1):
            p = p + 2
        return p


def number_1_grid(grid):
    """find number of 1 in the grid"""

    if grid is None or len(grid) == 0:
        return 0
    count = 0
    for row in grid:
        for elt in row:
            if elt == 1:
                count += 1
    return count
