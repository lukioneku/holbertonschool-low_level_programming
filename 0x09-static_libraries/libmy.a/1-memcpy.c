#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is an int
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int e;

for (e = 0; e < n && src[e] != '\0'; e++)
dest[e] = src[e];

for ( ; e < n; e++)
dest[e] = '\0';

return (dest);
}
