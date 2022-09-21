#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, len, tmp;

	len = n - 1;

	for (i = 0; i < len; i++)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len] = tmp;
		len--;
	}
}
