#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @str: string find len
 * Return: string length
 */
int _strlen(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
		;
	return (m);
}
/**
 * string_nconcat - concatenat
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) 
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
