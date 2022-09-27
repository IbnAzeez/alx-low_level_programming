#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c, match;

	c = 0;
	i = 0;

	while (s[i] != '\0')
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				match = 1;
			}
		}
		if (match == 0)
		{
			return (c);
		}
		i++;
	}
	return (0);
}
