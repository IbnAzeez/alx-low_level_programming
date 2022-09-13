#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new lin
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
