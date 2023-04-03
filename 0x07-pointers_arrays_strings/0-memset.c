#include "main.h"

/**
 * _memset - filss memory with constant byte
 * @s: pointer of type char s
 * @b: char b
 * @n: unsigned int
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	
	a = 0;

	while (a < n)
	{
		a++;
		s[a] = b;
	}
	return(s);
}
