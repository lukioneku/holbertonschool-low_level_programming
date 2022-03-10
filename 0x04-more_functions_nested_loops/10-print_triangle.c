#include "main.h"

/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */
void print_triangle(int size)
{
	int e, y;

	if (size > 0)
	{
		for (e = 1; e <= size; e++)
		{
			for (y = size; y >= 1; y--)
			{
				if (e < y)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
