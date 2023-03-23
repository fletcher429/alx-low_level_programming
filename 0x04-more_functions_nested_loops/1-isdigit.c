#include "main.h"

/**
 * _isdigit - gets the digits
 * @c: the parameter
 *
 * Return: 1 when digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
