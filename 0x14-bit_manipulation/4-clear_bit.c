#include "main.h"

/**
 * clear_bit - clears bit
 * @n: number argument
 * @index: nth bit
 * Return: cleared bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
