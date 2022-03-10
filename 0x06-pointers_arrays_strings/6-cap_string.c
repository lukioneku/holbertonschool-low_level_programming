#include "main.h"

/**
  * cap_string - cap all words
  * @s: string
  * Return: string
  */

char *cap_string(char *s)
{
	int e = 1, y, check;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[e] != '\0')
	{
		if (s[e] > 96 && s[e] < 123)
		{
			y = 0;
			check = 0;
			while (check == 0 && y < 13)
			{
				if (s[e - 1] == a[y])
				{
					check = 1;
				}
				y++;
			}
			if (check == 1)
			{
				s[e] -= 32;
			}
		}
		e++;
	}
	return (s);
}
