#!/usr/bin/python3
"""
calcs perimeter of an island marked by square grid(matrix) of 1 square metre
"""


def island_perimeter(grid):
    """ returns the perimeter of the island"""
    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter

#  incomplete and interesting thought process that time did not
#                   allow me to finish
#        if grid[i][j] == 1:
#           if grid[i - 1][j] == 0 and grid[i][j-1] == 0 and grid[i][j+1]==0:
#                perimeter += 3
#           elif grid[i-1][j] == 1 and grid[i][j-1] == 0 and grid[i][j+1] ==0:
#                perimeter += 2
#            elif grid[i+

# return perimeter
