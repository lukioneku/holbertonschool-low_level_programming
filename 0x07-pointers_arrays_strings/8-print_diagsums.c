#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - locates a character in a string
 * @a: is a pointer
 * @size: is a variable
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int e, y = 0, sum1 = 0, sum2 = 0;

for (e = 0; e < size; e++)
{
sum1 += a[e];
e += size + 1;
}

e = 0;

e = size - 1;

for (e = 0; e < size; e++)
{
sum2 += a[y];
y += size - 1;
}

printf("%d, %d\n", sum1, sum2);
}
