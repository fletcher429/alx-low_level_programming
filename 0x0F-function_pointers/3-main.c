#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -prints the results according to the user input
 * @argc: number of command-line arguments
 * @argc: pointer to strings
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int n1, n2, results;
	char t;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if(!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	t = *argv[2];
	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	results = op_func(n1, n2);

	printf("%d\n", results);

	return (0);
}
