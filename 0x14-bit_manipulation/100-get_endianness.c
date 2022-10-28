#include <stdio.h>
#include <stdint.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * union - takes the memory of the largest data type
 * Return: If big-endian - 0, If little-endian - 1.
 */
int get_endianness(void)
{
	union
	{
		int i;
		char c[sizeof(int)];
	} x;
	x.i = 1;
	if (x.c[0] == 1)
		return (1);

	return (0);
}
