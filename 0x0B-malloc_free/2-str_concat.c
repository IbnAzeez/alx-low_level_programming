#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			s3[i] = s1[i];
		}
	}

	if (s2)
	{
		for (i = 0; i < (len1 + len2); i++)
		{
			s3[i] = s2[j];
			j++;
		}
	}

	s3[i] = '\0';
	return (s3);
}
