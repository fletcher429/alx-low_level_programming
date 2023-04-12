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
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
