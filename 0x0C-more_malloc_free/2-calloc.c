#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocats memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element in array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
