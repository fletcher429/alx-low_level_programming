#include "main.h"
/**
 * print_line - prints the line
 * @n: prints the line
 */
void print_line(int n)
{
	for (n = 0; n <= 10; n++)
	{
		_putchar(95);
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
