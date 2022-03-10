#include "main.h"

/**
 * print_last_digit - print last digitof a number
 * @e: last digit
 * Return: last digit
 */

int print_last_digit(int e)
{
	if (e < 0)
		e = e * -1;
	_putchar((e % 10) + '0');
	return (e % 10);
}
