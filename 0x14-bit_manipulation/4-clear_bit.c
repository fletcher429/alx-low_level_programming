#include "main.h"

/**
 * clear_bit - clears bit
 * @n: number argument
 * @index: nth bit
 * Return: cleared bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);

	*n &= ~(1 << index);

	return ((*n >> index) & 1);
}
