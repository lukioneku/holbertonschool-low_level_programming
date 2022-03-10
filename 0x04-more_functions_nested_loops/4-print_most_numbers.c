#include "main.h"
/**
 * print_most_numbers - print all numbers except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int e = 0;

	while (e <= 9)
	{
		if (e != 2 && e != 4)
			_putchar(e + '0');
		++e;
	}
	_putchar('\n');
}
