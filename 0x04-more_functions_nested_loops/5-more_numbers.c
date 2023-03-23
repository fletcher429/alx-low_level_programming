#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints them 0 - 14
 * @a - the numbers
 * Return: 0 when done
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
	}
	_putchar('\n');
}
