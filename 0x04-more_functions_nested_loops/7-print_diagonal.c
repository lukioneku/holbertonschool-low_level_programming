#include "main.h"

/**
 * print_diagonal - draws a diagonal line across (n) terminal lines.
 * @n: the number of lines to print
 */
void print_diagonal(int n)
{
	int e, y;

	if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
			for (e = 1; e <= y; e++)
			{
				if (e != 1)
					_putchar(' ');
				if (e == y)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
