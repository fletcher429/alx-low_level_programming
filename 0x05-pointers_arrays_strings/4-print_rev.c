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

	j = i;

	for (a = j - 1; a => 0; i--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
