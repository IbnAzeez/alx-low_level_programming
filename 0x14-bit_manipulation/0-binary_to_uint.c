#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: points to a string of 0 and 1
 * Return: the converted number, or 0 if 
 * there is one or more chars in the string b that is not 0 or 1 
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l;
	unsigned int x;
	unsigned int y;
	int i;
       
	x = 1;
	y = 0;
/*	l = _strlen(b);*/
	i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
/*	for (c = len-1; c >= 0; c--)*/
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			y += x;
		}
		x *= 2;
	}

	return (y);
}
