#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * prints_string - print strings followed by a new line
 * @separator - the comma and the space
 * @n: number of arguments passed
 * Return: void;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", str);
		if (separator != NULL && i != (n-1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
