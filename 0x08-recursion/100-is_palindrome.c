#include "main.h"
/**
 * _actual_palindrome - checks if a string is palindrome
 * @s: palindrome string
 * @i: iteration
 * Return: palindrome string
 */
int _actual_palindrome(char *s, int a, int length)
{
	if (a >= length)
		return (1);
	if (s[a] == s[length])
		return (_actual_palindrome(s, a + 1, length - 1));
	else
		return (0);


}

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_actual_palindrome(s, 0, _strlen_recursion(s)));

}
