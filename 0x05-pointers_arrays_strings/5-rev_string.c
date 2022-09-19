#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, lenn;

	len = 0;
	lenn = 0;

	while (s[len] != '\0')
	{
		len++;									}
	lenn = len - 1;

	for (i = 0; i < lenn; i++)
	{
		tmp = s[i];
		s[i] = s[lenn];
		s[lenn] = tmp;
		lenn--;
	}
}
