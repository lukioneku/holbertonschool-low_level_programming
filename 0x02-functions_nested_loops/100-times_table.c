#include "main.h"
/**
 * print_times_table - prints the times table for e
 * @n: The multiplication table requested
 * Return: 0
 */
void print_times_table(int n)
{
	int e, x, res;

	if (!(n > 15 || n < 0))
	{
		for (e = 0; e <= n; e++)
		{
			for (x = 0; x <= n; x++)
			{
				res = (e * x);
				if (x != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && x != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && x != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
