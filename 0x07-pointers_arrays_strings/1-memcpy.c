#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the pointer destination
 * @src: pointer src
 * @n: amount of memory area to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *prevsrc;
	char *postdest;

	while (n > 0)
	{
		*postdest++ = *prevsrc;
		n--;
	}
	return (dest);
}
