#include "main.h"
/**
 * _puts_recursion - the function prints a string
 * @s: string
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s - 1);
	_putchar(*s);

}
