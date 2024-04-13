#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACITY 50000 // Size of the HashTable.

unsigned long int hash_djb2(const unsigned char *str);

int main() {
    char str[] = "Hello, World!";
    unsigned long hash_value = hash_djb2(str);
    
    printf("Hash value for '%s': %lu\n", str, hash_value);

    return 0;
}
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}