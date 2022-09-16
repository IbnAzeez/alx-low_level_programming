#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			}
		}
	}

	_putchar('\n');
}
