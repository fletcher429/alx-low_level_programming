#include "main.h"

/**
 * _isupper - gets the uppercase
 *
 * Return: 1 if true
 * @c: ascii codes
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
