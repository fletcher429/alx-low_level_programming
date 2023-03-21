#include "main.h"
/**
 * main - this is the main function
 * 
 *
 * print_alphabet - prints alphabet in lowercase to the console
 * 
 *
 *
 * Return: 0 when done
 */

void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
		
	}
	_putchar('\n');
}
