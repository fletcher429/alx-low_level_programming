#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin = 0;
	unsigned long int base = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (n > 0)
	{
		bin += (n & 1) * base;
		n >>= 1;
		base *= 10;
	}
	printf("%lu", bin);

}