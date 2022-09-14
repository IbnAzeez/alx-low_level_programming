#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the int to check
 * Return: last digit of int
 */

int print_last_digit(int n)
{
	int a;

	if (n > 10)
	{
		a = n % 10;
	}
	else
	{
		if (n < 10 && n >= 0)
		{
			_putchar(n + '0');
			return (n);
		}
	}
	_putchar(a + '0');
	return (a);
}
