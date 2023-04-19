#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name
 * @name: name to be printed
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
