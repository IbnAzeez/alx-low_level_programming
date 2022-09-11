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
		for (h = 48; h < 58; h++)
		{
			if (l != h && l < h)
			{
				putchar(l);
				putchar(h);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
