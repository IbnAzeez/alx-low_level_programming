#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, n, length, k, num;

	i = 0;
	j = 0;
	n = 0;
	k = 0;
	num = 0;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	while (i < length && k == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			n = n * 10 + num;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}

	if (k == 0)
		return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, number, x, y, z;

	sum = 0;
	x = 1;
	y = 0;
	z = 1;

	while (x < argc)
	{
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				puts("Error");
				return (1);
			}
			y++;
		}
		x++;
	}

	while (z < argc)
	{
		number = _atoi(argv[z]);
		if (number >= 0)
		{
			sum += number;
		}
		z++;
	}

	printf("%d\n", sum);
	return (0);
}
