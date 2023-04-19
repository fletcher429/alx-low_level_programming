#include "function_pointers.h"
#include <stdlib.h>


/**
 * int_index - searches for integer
 * @size: number elements in the array
 * @cmp: pointer to the function
 * @array: array of elements
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	return (-1);
}
