#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int i, words = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int i, j, k = 0, len = 0, words = 0, c = 0, start = 0, end = 0;
	char **matrix, *tmp;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				for (j = start; j < end; j++)
					tmp[j - start] = str[j];
				tmp[c] = '\0';
				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

