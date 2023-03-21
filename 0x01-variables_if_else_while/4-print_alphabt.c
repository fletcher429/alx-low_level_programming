#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 when done
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101 || a == 113)
		{
			continue;
		}

		putchar(a);

	}
	putchar('\n');
	return (0);
}
