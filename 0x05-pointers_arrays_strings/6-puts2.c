#include "main.h"

/**
  * puts2 - prints string
  * @str: variable
  *
  */

void puts2(char *str)
{
	int e = 0;

	while (str[e] != '\0')
	{
		if (e % 2 == 0)
		{
			_putchar(str[e]);
		}
		e++;
	}
	_putchar('\n');
}
