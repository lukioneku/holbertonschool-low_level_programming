#include "main.h"

/**
  * _memset - fills memory
  * @s: pointer
  * @b: variable
  * @n: constant
  * Return: 0
  */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

for ( ; i < n; i++)
s[i] = '\0';


return (s);
}
