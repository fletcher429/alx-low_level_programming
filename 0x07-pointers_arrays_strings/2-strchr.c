#include "main.h"
/**
 * strchr -  locates a string
 * @s: string
 * @c: this the target
 * Return: s when found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] = '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}

	return (NULL);
}
