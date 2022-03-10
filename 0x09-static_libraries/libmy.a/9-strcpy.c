#include "main.h"

/**
  * *_strcpy - copies the complete string
  * @src: pointer
  * @dest: same as above
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
int e, l;

for (l = 0; src[l] != '\0'; l++)
{
}

for (e = 0; e <= l ; e++)
{
	dest[e] = src[e];
}
return (dest);
}
