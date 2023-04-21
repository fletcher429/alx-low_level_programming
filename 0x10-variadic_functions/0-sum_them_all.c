#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all numbers
 * @n: number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, s = 0;

	va_list sum;
	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(sum, int);
		s += x;
	}
	va_end(sum);
	return (s);
}
