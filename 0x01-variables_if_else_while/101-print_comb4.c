#include <stdio.h>

/**
 * main - this is the main function
 *
 *
 * Return: 0 when done
 *
 */

int main(void)
{
	int a, b, c, count = 0;

	for (a = 0; a < 7; a++)
	{
		for (b = a + 1; b < 8; b++)
		{
			for (c = b + 1; c < 9; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				putchar(count < 83 ? ',' : ' ');
				putchar(32);
				count++;

			}
		}
	}
	putchar('\n');
	return (0);


















}
