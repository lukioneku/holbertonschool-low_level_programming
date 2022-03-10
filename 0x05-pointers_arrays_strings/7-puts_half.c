#include "main.h"

/**
  * puts_half - prints second half of a string
  * @str: string
  *
  */

void puts_half(char *str)
{
	int l, b, e;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	b = (l - 1) / 2;
	for (e = b + 1; str[e] != '\0'; e++)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
