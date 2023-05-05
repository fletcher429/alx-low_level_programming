#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int sig_bit = 1;

	while (sig_bit <= n)
	{
		sig_bit <<= 1;
	}
	sig_bit >>= 1;

	while (sig_bit != 0)
	{
		if (sig_bit & n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		sig_bit >>= 1;
	}

}
