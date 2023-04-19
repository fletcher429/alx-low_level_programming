#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>


/**
 * op_add - adds two ints
 * @a: 1
 * @b: 2
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - sub two ints
 * @a: 1
 * @b: 2
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - muls two ints
 * @a: 1
 * @b: 2
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two ints
 * @a: 1
 * @b: 2
 * Return: result
 */

int op_div(int a, int b)
{
	return (a /  b);
}

/**
 * op_mod - mods two ints
 * @a: 1
 * @b: 2
 * Return: result
 */


int op_mod(int a, int b)
{
	return (a %  b);
}
