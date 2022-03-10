#include "main.h"

/**
  * _strncpy - cpy src into dest
  * @dest: first string
  * @src: second string
  * @n: number of bytes
  * Return: string
  *
  */

char *_strncpy(char *dest, char *src, int n)
{
	int e = 0, y = 0;

	while (n > y)
	{
		if (src[y] == '\0')
		{
			for (; y < n; y++)
			{
				dest[e] = '\0';
				e++;
			}
		}
		else
		{
			dest[e] = src[y];
			y++;
			e++;
		}
	}

	return (dest);
}
