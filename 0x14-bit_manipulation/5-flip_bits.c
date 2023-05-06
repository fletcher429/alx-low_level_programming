#include "main.h"

/**
 * flip_bits - flips  bits passed in the args
 * @m: input int
 * @n: int
 * Return: new
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
		count++;
		mask &= (mask - 1);
	}
	return (count);
}
