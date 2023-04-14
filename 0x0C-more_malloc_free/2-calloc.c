#include "main.h"
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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
