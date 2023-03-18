#include <stdio.h>

/**
 * main - this is the main functin
 *
 *
 * Return: 0 when done
 */

int main(void)
{
	int i, j,  count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(count < 44 ?  ',' : ' ');
			count++;
		}
	}
	putchar('\n');
	return (0);
}
