#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, h;

	for (l = 48; l < 58; l++)
	{
		for (h = 48; n < 58; h++)
		{
			if (l != h)
			{
				putchar(l);
				
			}
			putchar(h);
		}
	}
	putchar('\n');
	return (0);
}
