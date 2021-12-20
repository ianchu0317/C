word = input("Enter the word: ")


def swap(n1,n2):
	return n2, n1

def permutation(string, start, end):
	if start==end:
		print(string)
	for x in string:
		string[start], string[start+1] = string[start+1], string[start]
		permutation(string, start+1, end)
		string[start], string[start+1] = string[start+1], string[start]


#word = list(word)
words = list()
#print(list_word)
word = "hola"
#permutation(word, 0, len(word))
print(word)
