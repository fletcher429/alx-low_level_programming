#include "main.h"
#include <math.h>
#include <limits.h>
/**
 * _pow_recursion - returns the pow of y
 * @x: value to be returned
 * @y: the power
 * Return: returns the pow of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1);
	}
	else
	{
		return (-1);
	}
}
