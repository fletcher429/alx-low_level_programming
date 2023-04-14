#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates array of intergers
 * @min: minimum
 * @max: maximum
 * Return: array of intergers
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size_array;

	if (min > max)
		return (NULL);
	size_array = ((max + 1) - min);
	ptr = malloc(size_array *sizeof(int));
	if (!ptr)
		return (NULL);
	for (i = 0; i < size_array; i++)
		ptr[i] = min + i;
	return (ptr);

}
