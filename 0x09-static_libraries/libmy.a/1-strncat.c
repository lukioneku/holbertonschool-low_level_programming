#include "main.h"

/**
 * _strncat - concatinate 2 strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int e = 0, y = 0;

	while (dest[e] != '\0')
		e++;

	while (src[y] != '\0' && n > y)
	{
		dest[e] = src[y];
		y++;
		e++;
	}
	if (n > 0)
	{
		dest[e] = '\0';
	}

	return (dest);
}
