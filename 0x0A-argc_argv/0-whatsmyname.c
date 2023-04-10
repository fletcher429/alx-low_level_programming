#include "main.h"

/**
 * main - gets the name of the programme
 * @i: set the index
 * Returin: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
