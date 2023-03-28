#include "main.h"
/**
 * print_rev - prints char in reverse
 * @s: is char type var
 * @i: iteration
 * @j: while
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, a;

	for (i = 0; s[i] != '\0'; i++);

	a = i;

	for (j = a - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
