#include "main.h"

/**
  * swap_int - swaps variables assigned to pointers
  * @a: variable 1
  * @b: variable 2
  */

void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
