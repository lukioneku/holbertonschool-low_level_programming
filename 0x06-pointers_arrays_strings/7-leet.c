#include "main.h"

/**
  * leet - encodes a string onto 1337
  * @s: string to encode
  * Return: encoded string
  */

char *leet(char *s)
{
	int e = 0, y = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', 'O', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[e] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (s[e] == array_low[y] || s[e] == array_up[y])
				s[e] = array_leet[y];
		}
		e++;
	}

	return (s);
}
