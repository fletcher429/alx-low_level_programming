#include "main.h"
/**
 * prime_number - helper function
 * is_prime_number - recursive function
 * @n: prime number
 * @i: divisor
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_number(n, 2));
}

int prime_number(int i, int n)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number(n, i + 1));
}
