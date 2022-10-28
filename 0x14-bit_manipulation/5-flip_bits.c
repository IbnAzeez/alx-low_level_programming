#include "main.h"

/**
 * count - counts set bits
 * @x: Number
 * Return: Number of bits
 */
int count(int x)
{
	int i;

	i = 0;

	while (x > 0)
	{
		i++;
		x &= (x - 1);
	}
	return (i);
}
/**
 * flip_bits - Counts the number of bits needed to be flipped.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count(n ^ m));
}
