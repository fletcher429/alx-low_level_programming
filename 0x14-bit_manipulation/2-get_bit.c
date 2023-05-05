#include "main.h"

/**
 * get_bit - gets the the value of index
 * @index: position
 * @n: integer value input
 *
 * Return: value
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int store;

	if (index > 64)
		return (-1);

	store = n >> index;

	return (store & 1);


}
