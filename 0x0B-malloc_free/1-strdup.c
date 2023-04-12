#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int j, i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
