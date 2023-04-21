#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with separator
 * @separator: this is the separator of numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list numbers;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);

		if (separator != NULL && i != (n -1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
