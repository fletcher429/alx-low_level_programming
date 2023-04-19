#include "main.h"
#include <stdio.h>

/**
 * print_name - prints the name
 * @name: name to be printed
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
