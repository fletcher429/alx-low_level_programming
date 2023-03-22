#include "main.h"

/**
 * print_last_digit - prints every minute in day
 * @a: gets the last digit
 *
 *
 * Return: 0 when gotten
 *
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
	{
		_putchar(-b  + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
	_putchar('\n');
}
