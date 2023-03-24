#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
    int digit, power, sign;

    if (n == 0) 
    {
        putchar('0');
        return;
    }

    sign = n < 0 ? -1 : 1;
    n *= sign;

    power = 1;
    while (n / power >= 10) {
        power *= 10;
    }

    if (sign == -1) {
        putchar('-');
    }

    while (power > 0) {
        digit = n / power;
        putchar(digit + '0');
        n -= digit * power;
        power /= 10;
    }
}


