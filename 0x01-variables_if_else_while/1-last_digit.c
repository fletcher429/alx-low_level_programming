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
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * This is where my code will go
	 *
	 *
	 * Happy coding
	 */

	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}

	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);

	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);



}
