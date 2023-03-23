#include "main.h"

/**
 * print_numbers - prints 0 t0 9
 * @a - ascii code
 * Return: void
 */
void print_numbers(void)
{
	int a;

	while (a < 10)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
