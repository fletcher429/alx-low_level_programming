#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args passed to it
 * @argc - number of commnaline args
 * @argv: arrays of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
