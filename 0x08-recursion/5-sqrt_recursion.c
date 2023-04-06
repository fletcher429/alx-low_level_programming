#include "main.h"
/**
 * _sqrt_recursion -  the recursive func
 * sqrt_algo_func - finds the squareroot
 * @n: squareroot of number
 * @i: sets the iteration
 * Return: squareroot of a natural number
 */
int sqrt_algo_func(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_algo_func(i, n));
	}
}

int _sqrt_recursion(int n)
{
	int i;

	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (sqrt_algo_func(n, i++));
	}
	else
	{
		return (0);
	}
}
