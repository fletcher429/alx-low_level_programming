#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of number
 * @argv: points to arrays of string
 * @argc: no of command line arguments
 * Return: voif
 */
int main (int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}	

	return (0);
}
