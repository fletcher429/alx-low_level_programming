#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the pointer destination
 * @c: sets iteration
 * @src: pointer src
 * @n: amount of memory area to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
