#include "main.h"
/**
 * _isdigit - checks for digits 1-9
 * @c: variable
 * Return: 1 if c is a digit, if not return 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
