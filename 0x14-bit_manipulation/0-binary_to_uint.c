#include "main.h"

/**
 * binary_to_uint -converts bin to unsigned int
 * @b: binary string
 * Return: results
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
		i++;
	}
	return (result);
}
