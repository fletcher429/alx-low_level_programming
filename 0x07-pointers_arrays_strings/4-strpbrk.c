#include "main.h"
/**
 * _strpbrk -  seraches a string for any set of bytes
 * @s: string to be serached
 * @accept: stores the serached
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *x = accept;
		while (*x != '\0')
		{
			if (*s == *x)
			{
				return (s);
			}
			x++;
		}
		s++;
	}
	return (NULL);
}
