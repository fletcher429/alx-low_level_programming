#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the adds of two integer
 * @argv: points to the arrays of string
 * @argc: no of command line args
 * Return: void
 */

int main (int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
   return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int x;

		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf ("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
