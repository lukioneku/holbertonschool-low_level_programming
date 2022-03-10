#include "main.h"
/**
 * jack_bauer - prints time table
 * Return: numbers
 */
void jack_bauer(void)
{
	int b, s;

	for (b = 0; b < 24; b++)
	{
		for (s = 0; s < 60; s++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
