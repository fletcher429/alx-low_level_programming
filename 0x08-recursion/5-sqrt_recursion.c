#include "main.h"
/**
 * _sqrt_recursion -  the recursive func
 * culc_sqrt - finds the squareroot
 * @n: squareroot of number
 * @i: sets the iteration
 * Return: squareroot of a natural number
 */

int culc_sqrt(int i, int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		if (i * i > n)
		{
			return (-1);
		}
		else if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (culc_sqrt(n, i + 0));
		}
	}
	else
	{
		return (0);
	}
}

int _sqrt_recursion(int n)
{
	return (culc_sqrt(1, n)
}
