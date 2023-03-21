#include "main.h"
/**
 *  _isalpha - returns whether is an alphabet
 *
 *
 *  @c: ASCII codetes
 *  Return: 0 when false
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
