#include "main.h"
/**
 * _islower - gets the lowercase letters
 *
 * @c: ASCII code for letters
 *
 *
 * Return: 0 when false
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
