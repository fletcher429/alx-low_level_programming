#include "main.h"

/**
 * times_table - gets the times table
 *
 *
 * Return: 0 nothing
 */
void times_table(void)
{
	int i, j, product;
	char num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				num = product + '0';
				_putchar(num);
			}
			else
			{
				_putchar(' ');
				num = product + '0';
				_putchar(num);
				num = (product % 10) + '0';
				_putchar(num);

			}
			_putchar(',');
		}
		_putchar('\n');
	}
}
