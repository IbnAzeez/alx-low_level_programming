#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, y, n, length, x, num;

	i = 0;
	y = 0;
	n = 0;
	x = 0;
	num = 0;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	while (i < length && x == 0)
	{
		if (s[i] == '-')
			++y;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (y % 2)
				num = -num;
			n = n * 10 + num;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}
	if (x == 0)
		return (0);
	return (n);
}
