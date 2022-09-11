#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, h, m;

	for (l = 48; l < 58; l++)
	{
		for (m = 48; m < 58; m++)
		{
			for (h = 48; h < 58; h++)
			{
				if (l != m && l != m && m != h && l < m && l < h && m < h)
				{
					putchar(l);
					putchar(m);
					putchar(h);
					if (l != 55 || m != 56 || h != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
