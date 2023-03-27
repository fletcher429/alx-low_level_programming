#include "main.h"

/**
 * swap_int - functions swap
 * @a: var 1
 * @b: var 2
 * @mp: tmp
 */
void swap_int(int *a, int *b)
{
	int mp = *a;
	*a = *b;
	*b = mp;
}
