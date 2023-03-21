#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 */

void print_alphabet_x10(void)
{
	int counter;
	int a;

	for (counter = 0; counter < 10; counter++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}






}
