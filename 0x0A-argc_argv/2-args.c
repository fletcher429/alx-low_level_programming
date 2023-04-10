#include "main.h"

/**main - prints all arguments passed to it
 * @argv: pointers arrays of command line argument
 * @argc: no of command - line arguments
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}
	putchar('\n');
	return (0);
}
