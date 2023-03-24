#include "main.h"
/**
 * print_diagonal - prints them in diagonal
 *
 * @n: first var
 * @i: checks the condition
 * @j: second var
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; j < n; j++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
