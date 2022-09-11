#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t, r;

	for (f = 48; f < 58; f++)
	{
		for (s = 48; s < 58; s++)
		{
			for (t = 48; t < 58; t++)
			{
				for (r = 48; r < 58; r++)
				{
					if (f != 57 || s != 57)
					{
						putchar(f);
						putchar(s);
						putchar(' ');
						if (t != 0 && r != 0)
						{
							putchar(t);
							putchar(r);
							if (f != 57 || s != 56 || t != 57 || r != 57)
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
