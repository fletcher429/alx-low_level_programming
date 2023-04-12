#include <stdlib.h>
#include "main.h"

/**
 * create_array -creates an array and returns
 * @size: size of the array
 * @c: where stored
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *ptr;

	if (size == 0)
	{
		return (0);
	}
	ptr = malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	p = 0;

	while (p < size)
	{
		ptr[p] = c;
		p++;
	}
	return (ptr);
}
