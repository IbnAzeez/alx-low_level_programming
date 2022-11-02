#include "main.h"

/**
 * create_file - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_file(char *file)
{
	char *temp;
	
	temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (temp);
}

/**
 * close - Closes file descriptors.
 * @fc: The file descriptor to be closed.
 */
void close(int fc)
{
	int c;

	c = close(fc);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", fc);
		exit(100);
	}
}
