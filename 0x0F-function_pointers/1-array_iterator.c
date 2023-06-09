#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as apara
 * @array: iteration
 * @action: executes
 * @size: array
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
