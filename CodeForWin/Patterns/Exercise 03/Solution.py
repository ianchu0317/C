#!/usr/bin/env python3

def print_pattern(ROW, COLUMN):
    for i in range(ROW):
        for x in range(COLUMN):
            # Print all first row and last row
            if i == 1 or i == ROW:
                print("*", end = '')
            # Print first and last star in middle columns
            elif x == 1 or x == COLUMN:
                print("*", end = '')
            else:
                print(" ")

'''
            if i != 1 or i != ROW:
                for j in range(i, DIAGONALS):
                    print("*")
'''

def main():
    try:
        rows = input("Input row number: ")
        columns = input("Input column number: ")
        ROW = int(rows) + 1
        COLUMN = int(columns) + 1
        print_pattern(ROW, COLUMN)
    except ValueError:
        print()


if __name__ == '__main__':
    main()
