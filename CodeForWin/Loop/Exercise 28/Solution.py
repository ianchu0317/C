#!/bin/bash/env python3

def checkPrime(number):
    for x in range(1, number + 1, 1):
        if number % x == 0:
            return 1


if __name__ == "__main__":

    limit = input("[+] Input upper limit: ")

    sum = 0
    primeNumbers = []

    for x in range(1, int(limit)+1):
        for i in range(2, x):
            if x % i == 0:
                print(x)
                sum += x

    print("Sum of prime numbers between 1-%d: " % int(limit))
    for y in primeNumbers:
        print(y, end = ", ")
