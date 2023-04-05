#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string
 * @s: this is the string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if(*s)
		return;
	return (1 + _strlen_recursion(s +1);
}
