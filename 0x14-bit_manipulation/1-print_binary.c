#include<stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? _putchar("1") : _putchar("0");
}
