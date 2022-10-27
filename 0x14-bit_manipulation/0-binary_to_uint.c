#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: points to a string of 0 and 1
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	unsigned int y;
	int i;
       
	x = 1;
	y = 0;
	i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
		i++;

	i = i - 1;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			y += x;
		}
		x *= 2;
		i++;
	}

	return (y);
}
