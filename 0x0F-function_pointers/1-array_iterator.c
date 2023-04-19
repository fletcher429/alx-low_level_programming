#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as apara
 * @array: iteration
 * @action: executes
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;

	while(i < 0)
	{
		action(array[i]);
		i++;
	}
}
