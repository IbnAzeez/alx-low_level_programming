#include<stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
/*	unsigned int i;*/
/**
*	for (i = 1; i > 0; i = i / 2)
*		(n & i) ? _putchar('1') : _putchar('0');
*/
	if (n > 1)
	       print_binary(n / 2);

	_putchar(n % 2 + '0');
}

