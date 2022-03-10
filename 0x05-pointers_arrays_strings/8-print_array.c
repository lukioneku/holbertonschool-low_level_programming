#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: array to print
 * @n: array length
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
