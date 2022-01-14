#!/usr/bin/env python3

# Function to print the triangle
def print_triangle(rows):
    rows += 1
    #print row
    for row in range(1, rows):
        #print stars
        for star in range(1, row+1):
            #print first and last stars
            if (row == 1) or (row == rows) or (star == 1) or (star == row+1):
                print("*", end = '')
            else:
                print(" ", end = '')
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
