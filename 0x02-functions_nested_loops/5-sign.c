#include "main.h"
/**
 * print_sign - prints the sign
 *
 * @n: the n value
 * Return: 0 when negative
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(49);
		return (1);
	}
	else
	{
		return (-1);
	}
	_putchar('\n');
}
