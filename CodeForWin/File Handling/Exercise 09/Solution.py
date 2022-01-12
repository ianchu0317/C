#!/usr/bin/env python3
import os

#Function to remove word
'''
def removeWord(string, word):
    new_string = ''
    string_len = len(string) + 1
    word_len = len(word) + 1
    letterCounter = 0

    for x in range(0, string_len):
        if word[letterCounter] != string[x]:
            new_string += string[x]
            letterCounter = 0
        else:
            for s in range(0, word_len):

        elif letterCounter > 0 and word:
            pass
        elif string[x] == ' ':
            letterCounter = 0
    return new_string
'''

# Main function of program
def main():
    # User input data
    filename = input("Input file name: ")
    wordToRemove = input("Input the word to remove: ")

    content = str()
    newFile = open("temp.txt", "w")

    # Read file line by line
    with open(filename, "r") as file:
        content = file.readline()
        #newContent = removeWord(content, wordToRemove)
        newFile.write(content.replace(wordToRemove, ''))

    os.remove(filename)
    os.rename("temp.txt", filename)

    newFile.close()
# Run main function
if __name__ == '__main__':
    main()
