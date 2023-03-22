#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 *
 */

void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
