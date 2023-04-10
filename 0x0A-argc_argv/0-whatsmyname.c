#include "main.h"
#include <stdio.h>

/**
 * main - gets the name of the programme
 * @argc: no of command line arguments
 * @argv: pointers to string
 * @i: set the index
 * Returin: 0
 */
int main(int argc __attribute__((unsused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
