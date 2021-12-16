import os
from sys import platform


def folder_quantity():
	try:
		q = int(input("[+] Folders to create : "))
		return q
	except ValueError:
		print("[!] Invalid number")
		folder_quantity()

def first():
	try:
		f = int(input("Enter start folder number : "))
		return f
	except ValueError:
		print("[!] Invalid number")
		first()

def system():
	if platform == 'win32':
		return '\\'
	elif platform == 'linux' or platform == 'darwin':
		return '/'

def create(start, quantity, slash):
	
	path = str()

	for x in range(quantity+1):		
		
		#Create directory
		if start < 10:
			path = f'{os.getcwd()}{slash}exercise_0{start}'
		else:
			path = f'{os.getcwd()}{slash}exercise_{start}'	
		
		os.mkdir(f"{path}")

		#Create README.md
		with open(f"{path}" + slash + "README.md", "a") as fp:
			pass

		#Create solution.txt
		with open(f"{path}" + slash + "solution.txt", "a") as fp:
			pass
		
		start += 1

		print(f"Folder '{path}' created")


if __name__ == "__main__":
	quantity = folder_quantity()
	first = first()
	slash = system()
	create(first, quantity, slash)
	print("! Done")
