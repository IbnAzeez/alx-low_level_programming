#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	i = 0;

	while (i < height)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);

			j = 0;

			while (j <= i)
				free(arr[j]);
				j++;
			return (NULL);
		}
		i++;
	}


	i = 0;

	while (i < height)
	{
		j = 0;

		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
