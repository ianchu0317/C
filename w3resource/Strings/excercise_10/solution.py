string = input("Input the string : ")

counter = 0
max = 0
max_char = str()

for letter in string:
	for x in string:
		if letter==x:
			counter+=1
	if counter > max:
		max=counter
		max_char=letter

	counter = 0

print(f"The Highes frequency of character '{max_char}'\nappears number of times : {max} ")
