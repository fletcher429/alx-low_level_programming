#include "main.h"
/**
 * print_line - prints the line
 * @n: prints
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (n = 0; n <= 10; n++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
