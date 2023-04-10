#include "main.h"

/**main - prints all arguments passed to it
 * @argv: pointers arrays of command line argument
 * @argc: no of command - line arguments
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
