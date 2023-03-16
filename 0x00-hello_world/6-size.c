#include <stdio.h>
#include <stdint.h>

/**
 * main - main function
 *
 * Return: 0 when done
 */

int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of short: %zu byte(s)\n", sizeof(short));
printf("Size of long: %zu byte(s)\n", sizeof(long));
printf("Size of long long: %zu byte(s)\n", sizeof(long long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
printf("Size of long double: %zu byte(s)\n", sizeof(long double));
printf("Size of int8_t: %zu byte(s)\n", sizeof(int8_t));
printf("Size of int16_t: %zu byte(s)\n", sizeof(int16_t));
printf("Size of int32_t: %zu byte(s)\n", sizeof(int32_t));
printf("Size of int64_t: %zu byte(s)\n", sizeof(int64_t));
printf("Size of intptr_t: %zu byte(s)\n", sizeof(intptr_t));
return (0);
}
