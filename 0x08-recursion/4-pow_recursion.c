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

	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (1);
	}
	else
	{
		int pow =  (_pow_recursion(x, y -1));

		if (pow > INT_MAX / 2)
		{
			return (-1);
		}
		return (x * pow);

	}

}
