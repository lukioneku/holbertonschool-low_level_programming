#include "main.h"

/**
 * print_line - draws a straight line (n) characters long.
 * @n: the number of underscores to print.
 */
void print_line(int n)
{
	int e;

	if (n > 0)
		for (e = 0; e < n; e++)
			_putchar('_');
	_putchar('\n');
}
