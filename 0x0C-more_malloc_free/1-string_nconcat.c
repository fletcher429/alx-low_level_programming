#include "main.h"
#include <stdlib.h>
/**
 * strlen - finds the legnth of a string
 * @length - the string
 * Return: legnth of a string
 */
int strlen(char *length)
{
	int j;

	for (j = 0; length[j] != '\0'; j++)
		;
	return (j);
}

/**
 * string_nconcat - concates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *cont;
	
       if (s1 == NULL)
	       s1 = "";
       if (s2 == NULL)
	       s2 = "";
       if (n < strlen(s2))
	       strlen(s2) = num;
       l1 = strlen(s1) + n + 1;

       count = malloc(sizeof(*count) * l1);
       
       if(!count)
	       return (NULL);

       for (i = 0; s1[i] != '\0'; i++)
	       cont[i] = s1[i];
       for (j = 0; j < n; j++)
	       cont[i + j] = s2[j];
       cont[i + j] ='\0';

       return(cont);
}
