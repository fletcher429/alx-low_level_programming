#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2d array of intergers
 * @width: row
 * @height: column
 * Return: returns pointer
 */
int **alloc_grid(int width, int height)
{
    int i, j;
    int **p;

    // Check if width and height are valid
    if (width <= 0 || height <= 0)
        return (NULL);

    // Allocate an array of height pointers
    p = (int **) malloc(sizeof(int *) * height);

    // If allocation fails, return NULL
    if (p == NULL)
        return (NULL);

    // For each row, allocate an array of width integers
    for (i = 0; i < height; i++) {
        p[i] = (int *) malloc(sizeof(int) * width);
        // If allocation fails, free previously allocated memory and return NULL
        if (p[i] == NULL) {
            for (j = 0; j < i; j++)
                free(p[j]);
            free(p);
            return (NULL);
        }
        // Initialize each element to 0
        for (j = 0; j < width; j++)
            p[i][j] = 0;
    }

    // Return the pointer to the 2D array
    return (p);
}

