i#include <stdio.h>
#include <ctype.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x,y;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(toupper(y));
	}
	putchar('\n');
	return (0);
}
