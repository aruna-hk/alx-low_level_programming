#!/usr/bin/python3
""" this module has function to calculate perimeter of island """


def island_perimeter(grid):
    """ functio to compute perimeter of the island """

    land = 0
    count = 0
    for row in grid:
        for i in range(len(row)):
            if (row[i] == 1):
                if (count == 0):
                    land = land + 4
                else:
                    land = land + 2
                    count = count + 1
        i = 0
    return (land)
