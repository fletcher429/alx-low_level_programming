#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2d array of intergers
 * @width: row
 * @height: column
 * Return: returns pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **two_d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	two_d = (int **)malloc(sizeof(int *) * height);

	if (two_d == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		two_d[i] = (int *) malloc(sizeof(int) * width);

		if (two_d == NULL)
		{
			for (j = 0; j < i; i++)
				free(two_d[j]);
			free(two_d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			two_d[i][j] = 0;
	}
	return (two_d);
}
