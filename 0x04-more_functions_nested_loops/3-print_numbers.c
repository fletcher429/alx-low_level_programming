#include "main.h"

/**
 * print_numbers - prints 0 t0 9
 * @a - ascii code
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
