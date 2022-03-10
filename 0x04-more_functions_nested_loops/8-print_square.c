#include "main.h"

/**
 * print_square - draws a square using multiple terminal lines and #'s
 * @size: how big the square is
 */
void print_square(int size)
{
	int e, y;

	if (size > 0)
	{
		for (e = 0; e < size; e++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
