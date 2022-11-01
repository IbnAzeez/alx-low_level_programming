#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *sourceFile;
	FILE *destFile;
	char sourcePath[100];
	char destPath[100];

	char ch;

	/* Input path of files to copy */
	printf("Enter source file path: ");
	scanf("%s", sourcePath);
	printf("Enter destination file path: ");
	scanf("%s", destPath);

	sourceFile  = fopen(sourcePath, "r");
	destFile    = fopen(destPath,   "w");
	if (destFile == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	/* fopen() return NULL if unable to open file in given mode. */
	if (sourceFile == NULL || destFile == NULL)
	{
		/* Unable to open file hence exit */
		printf("\nUnable to open file.\n");
		printf("Please check if file exists and you have read/write privilege.\n");
		exit(EXIT_FAILURE);
	}

	ch = fgetc(sourceFile);
	while (ch != EOF)
	{
		/* Write to destination file */
		fputc(ch, destFile);
		/* Read next character from source file */
		ch = fgetc(sourceFile);
	}

	printf("\nFiles copied successfully.\n");

	/* Finally close files to release resources */
	fclose(sourceFile);
	fclose(destFile);

	return 0;
}
