#include "main.h"
/**
 * strchr -  locates a string
 * @s: string
 * @c: this the target
 * Return: s when found
 */
char *strchr(char *s, char c)
{
	for (*s = 0; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
