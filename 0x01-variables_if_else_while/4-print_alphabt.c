#include <stdio.h>
#include <ctype.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x != 'E' && x != 'Q')
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');
	return (0);
}
