#include "main.h"

/**
 * _putchar - prints char
 * @c: char
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
