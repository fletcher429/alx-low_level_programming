#include <stdio.h>

/**
 * main - this is the main functin
 *
 *
 * Return: 0 when done
 */

int main(void)
{
	int n;

	for (n = 1; n <= 90; n++)
	{
		putchar('0' + n / 10);
		putchar('0' + n % 10);
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
