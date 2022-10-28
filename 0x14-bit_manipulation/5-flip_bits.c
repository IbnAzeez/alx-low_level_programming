#include "main.h"

/**
 * flip_bits - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @m: The index to set the value at - indices start at 0
 * Return: number of bits you needed to flip to get from one number to another.  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	*n = *n ^ (1lu << m);

	return (n);
}
