#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string inputted
 *
 */

void print_rev(char *s)
{
	int e;
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

		for (e = l - 1; e >= 0; e--)
		{
			_putchar(s[e]);
		}
	_putchar('\n');
}
