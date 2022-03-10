#include "main.h"
/**
 * more_numbers - prints the range 0-14 ten times.
 * Return: 0
 */
void more_numbers(void)
{
	int e, y;

	e = y = 0;
	while (e < 10)
	{
		while (y <= 14)
		{
			if (y >= 10)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			++y;
		}
		_putchar('\n');
		y = 0;
		e++;
	}
}
