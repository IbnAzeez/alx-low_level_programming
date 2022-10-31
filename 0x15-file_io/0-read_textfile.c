#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t	rd;
	ssize_t wr;
	char *temp;

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, temp, letters);
	wr = write(STDOUT_FILENO, temp, rd);

	if (wr != rd || op == -1 || rd == -1 || wr == -1)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(op);

	return (wr);
}

