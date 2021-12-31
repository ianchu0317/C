#!/usr/bin/env python3
from os import system

# Create file
def createFiles(path):
    system(f'touch {path}/README.md')


# Create folders
def createFolder(folderStart, folderEnd):

    folderName = str()

    for folderNumber in range(folderStart, (folderEnd + 1)):
        if folderNumber < 10:
            folderName = 'Exercise 0' + str(folderNumber)
        else:
            folderName = 'Exercise ' + str(folderNumber)

        system(f'mkdir "{folderName}"')
        createFiles(f'"{folderName}"')


# Main function
def main():
    try:
        folderStart = int(input("- Enter the folder starting number: "))
        folderEnd = int(input("- Enter the folder ending number: "))
        createFolder(folderStart, folderEnd)
    except ValueError:
        print("[!] Invalid input")

if __name__ == '__main__':
    main()
