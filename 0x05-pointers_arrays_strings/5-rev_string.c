#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer variable
 * Return: 0
 */

void rev_string(char *s)
{
	int l, y, e;
	char b1, b2;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	y = l - 1;
	e = 0;

	while (y > e)
	{
		b1 = s[e];
		b2 = s[y];
		s[e] = b2;
		s[y] = b1;
		y--;
		e++;
	}
}
