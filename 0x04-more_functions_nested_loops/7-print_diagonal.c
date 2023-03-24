#include "main.h"
/**
 * print_diagonal - prints them in diagonal
 *
 * @a: first var
 * @n: checks the condition
 * @b: second var
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < a; b++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
}
