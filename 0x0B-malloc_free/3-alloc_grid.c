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
	int **two;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	two = malloc(sizeof(int) * height);

	if (two == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		two[i] = malloc(sizeof(int) * width);

		if (two[i] == NULL)
		{
			for (j = 0; j < i; i++)
				free(two[j]);
			free(two);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			two[i][j] = 0;
	return (two);
}
