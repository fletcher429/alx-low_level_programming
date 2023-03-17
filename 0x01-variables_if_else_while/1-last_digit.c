#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - this is the main function
 *
 * Return: 0 when done
 */


int main(void)
{

	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * This is where my code will go
	 *
	 *
	 * Happy coding
	 */

	if (n > 5)
	{
		printf("is %d and is greater than 5\n", n);
	}
	else
	{
		if (n == 0)
		{
			printf("is %d and is 0\n", n);
		}
	}
	else
	{
		printf("is %d and is less than 6 and not 0\n", n);
	}
}
