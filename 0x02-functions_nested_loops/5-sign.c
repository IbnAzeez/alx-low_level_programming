#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int c)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar(48);
			rturn (0);
		}
		else
		{
			_putchar('-');
		}
		return (-1);
	}
}
