#include "main.h"
/**
 * print_numbers - prints the digits 1-9
 * e - variable
 */
void print_numbers(void)
{
	int e = 0;

	while (e <= 9)
	{
		_putchar(e + '0');
		++e;
	}
	_putchar('\n');
}
