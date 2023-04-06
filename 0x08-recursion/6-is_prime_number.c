#include "main.h"
/**
 * prime_number - helper functio
 * is_prime_number - calls the helper function
 * @n: prime number
 * @i: divisor
 * Return: prime
 */

int prime_number(int i, int n)
{
	if (i * i > n)
		return (1);
	if(n %  i == 0 && i > 0)
		return (0);
	return (prime_number(i -1, n));
}

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_number(n, n - 1));	
}
