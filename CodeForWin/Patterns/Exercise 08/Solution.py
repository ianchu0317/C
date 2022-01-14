#!/usr/bin/env python3

# Function to print the triangle
def print_triangle(rows):
    length_rows = rows + 1
    for row in range(1, rows + 1):
        for star in range(1, row + 1):
            print("*", end = '')
        print("")

# Main function
def main():
    try:
        rows = int(input("Input row number: "))
        print_triangle(rows)

    except ValueError:
        print("[!] Invalid input")

#Run main function if the script is local
if __name__ == '__main__':
    main()
