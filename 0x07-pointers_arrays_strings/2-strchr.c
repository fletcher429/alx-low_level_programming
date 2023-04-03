#include "main.h"
/**
 * _strchr -  locates a string
 * @s: string
 * @c: this the target
 * Return: s when found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
