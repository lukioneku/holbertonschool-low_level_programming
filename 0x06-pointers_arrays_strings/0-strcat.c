#include "main.h"

/**
  * _strcat - concatinates 2 strings
  *@dest: 1st string
  *@src: 2nd string
  * Return: string
  */

char *_strcat(char *dest, char *src)
{
	int e = 0, y = 0;

	while (dest[e] != '\0')
		e++;

	while (src[y] != '\0')
	{
		dest[e] = src[y];
		e++;
		y++;
	}

	dest[e] = '\0';

	return (dest);
}
