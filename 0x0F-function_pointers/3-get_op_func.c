
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - gets the operand
 * @s: pointer ti char s
 * Return: results
 *
*/



int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0;

    while (ops[i].op != 0)
    {
        if (strcmp(ops[i].op, s) == 0)
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
