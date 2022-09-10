#include <stdio.h>
#include <ctype.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'F'; y++)
	{
		putchar(tolower(y));
	}
	putchar('\n');
	return (0);
}
