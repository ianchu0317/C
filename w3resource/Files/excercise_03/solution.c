#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Get the lines
	int lines;
	printf("Input the number of lines to be written : ");
	scanf("%d", &lines);
	printf(":: The lines are ::\n");

	char string[] = "test line";
	FILE *file = fopen("test.txt", "w");
	for (int i=1; i<=lines; i++)
	{
		fprintf(file,"%s %d\n", string, i);
		printf("%s %d\n", string, i);
	}
/*	for (int i=1; i<=lines; i++)
	{
		for(int x=1; i<=strlen(string); x++)
		{
			fputc(string[x-1], file);
		}
		fputc(,file)
		fputc("\n", file);
	}
*/
	fclose(file);

	return 0;
}
