#include "main.h"

/**
 * jack_bauer - gets the time
 *
 *
 *
 * Return: 0 when done;
 */

void jack_bauer(void)
{
	int u, v, w, x;

	for (u = 0; u <= 2; u++)
	{
		for (v = 0; v <= 9; v++)
		{
			for (w = 0; w <= 5; w++)
			{
				for (x = 0; x <= 9; x++)
				{
					if (u >= 2 && v >= 4)
						break;
					_putchar('0' + u);
					_putchar('0' + v);
					_putchar(':');
					_putchar('0' + w);
					_putchar('0' + x);
					_putchar('\n');

				}
			}
		}
	}
}
