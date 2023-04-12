#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of grid
 * @ac: argument
 * @av: double pointer
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{

	int i, j, k, len = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	/* Calculate total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++; /* Account for the null terminator */

	/* Allocate memory for the concatenated string */
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);

	/* Copy the arguments into the concatenated string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';

	return (s);
}

