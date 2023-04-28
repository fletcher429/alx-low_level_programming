#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *
 * print_all - prints anything
 * @format: prints formatted string to the output
 *
 *
 * Return: printed char
 *
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s;
	char *space = "";

	va_list print;

	va_start (print, format);


	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 's':
					s = va_arg(print, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", space, s);
					break;
				case 'i':
					printf("%s%d", space, va_arg(print, int));
					break;
				case 'c':
					printf("%s%c", space, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(print, double));
					break;
				default: 
					j++;
					continue;
			}
			space = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(print);
}
