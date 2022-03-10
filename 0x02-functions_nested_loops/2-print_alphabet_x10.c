#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 */

void print_alphabet_x10(void)
{
	char i = 0;
	int ch;

	while (i < 10)

	{
		i++;
		for (ch = 'a'; ch <= 'z'; ch++)

			_putchar(ch);

		_putchar('\n');
	}
}

