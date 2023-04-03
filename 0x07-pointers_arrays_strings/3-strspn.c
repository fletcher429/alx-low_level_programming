#include "main.h"
/**
 * _strspn - function to write the legth of a substring
 * @s: evaluation
 * @accept: stores the string
 * @return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int acceptCharacters[256] = {0};

	while (*accept != '\0')
	{
		acceptCharacters[*accept++] = 1;
	}
	while (*s != '\0' && acceptCharacters[*s++])
	{
		length++;

	}
	return (length);
}
