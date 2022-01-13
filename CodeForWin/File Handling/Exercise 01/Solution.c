#include <stdio.h>
#include <stdlib.h>


int main()
{
	/* Create file pointer */
	FILE *file_ptr;
	
	/* Open file for writing */
	file_ptr = fopen("text.txt", "w");
	
	/* Print "Hello World !" into the file */
	fprintf(file_ptr, "Hello World !\n");
	
	/* Close the file */
	fclose(file_ptr);

	return 0;
}
