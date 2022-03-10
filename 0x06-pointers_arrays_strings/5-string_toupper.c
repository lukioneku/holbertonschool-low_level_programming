#include "main.h"

/**
  * string_toupper - changes lowercase letters to uppercase
  * @s: string to modify
  * Return: s
  */

char *string_toupper(char *s)
{
	int e = 0;

	while (s[e] != '\0')
	{
		if (s[e] > 96 && s[e] < 123)
		{
			s[e] -= 32;
		}
		e++;
	}

	return (s);
}
