#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[i] != '\0'; len1++)
		;
	for (len2 = 0; s2[j] != '\0'; len2++)
	{
		if (len2 < n)
			len2++;
	}
	concat = malloc(len1 + len2);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);

}
