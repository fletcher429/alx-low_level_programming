#include "main.h"
/**
 * _strspn - function to write the legth of a substring
 * @s: evaluation
 * @accept: stores the string
 * @Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int e, f, g, h;

	g = 0;
	e = 0;
	f = 0;

	while (e != '\0')
	{
		h = 0;
		e++;
		while (accept[f] != '\0')
		{
			f++;
			if (s[e] == accept[f])
			{
				g++;
				h = 1;
			}
		}
		if (h == 0)
		{
			return (g);
		}
	}
	return (0);
}
