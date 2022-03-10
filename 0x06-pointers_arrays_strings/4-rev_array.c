#include "main.h"

/**
  * reverse_array - reverse the array
  * @a: array
  * @n: array length
  */

void reverse_array(int *a, int n)
{
	int e, y, tmp;

	y = n - 1;
	for (e = 0; e < n / 2; e++)
	{
		tmp = a[e];
		a[e] = a[y];
		a[y] = tmp;
		y--;
	}
}
