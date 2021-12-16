def bin(binary, number):
	while number > 1:
		print(number)
		binary += str(number%2)
		bin(binary, number/2)
	return binary


if __name__ == '__main__':
	number = int(input("Input any decimal number : "))
	binary = list()
	binary = bin(binary, number)

	b = "".join(binary)
	print(f"The Binary Value of decimal no. {number} is : {b}")

