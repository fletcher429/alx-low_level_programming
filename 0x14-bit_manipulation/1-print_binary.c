#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	char bin[32] = {0};
	int j;
	int i = 0;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		bin[i++] = (n & 1) + ('0');
		n >>= 1;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(bin[j]);
}
