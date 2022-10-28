#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index
 * @n: A pointer to the bit.
 * @index: The index to clear the value at - indices start at 0.
 * Return: If an error occurs - -1. Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1lu << index);

	return (1);
}
