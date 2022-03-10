#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: pointer to be shown
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int e;

	e = 0;
	while (*s != '\0')
	{
		e++;
		s++;
	}
	return (e);
}
