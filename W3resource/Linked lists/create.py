import os

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

def create(start, quantity):
	for x in range(quantity+1):
		#Create directory
		os.mkdir(f"exercise_{start}")
		#Create README.md
		with open(f"exercise_{start}/README.md", "a") as fp:
			pass
		#Create solution.txt
		with open(f"exercise_{start}/solution.txt", "a") as fp:
			pass
		start += 1
		print(f"Folder 'exercise_{start}' created")


if __name__ == "__main__":
	quantity = folder_quantity()
	first = first()
	create(first, quantity)
	print("! Done")
