#include <stdio.h>

/**
 * main - this the main function
 *
 * Return: 0 when done;
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);






}
