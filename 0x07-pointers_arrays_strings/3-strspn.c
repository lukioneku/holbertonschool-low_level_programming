#include "main.h"
#include <stdio.h>

/**
 * _strspn - locates a character in a string
 * @s: is a pointer
 * @accept: is a pointer
 * Return: number of bytes repeated
 */

unsigned int _strspn(char *s, char *accept)
{
int e, y, num = 0, cont = 0;


for (e = 0; s[e] != '\0'; e++)
{

for (y = 0; accept[y] != '\0'; y++)
{
if (s[e] != accept[y])
continue;

else
{
num++;
break;
}
}

for (y = 0; accept[y] != '\0'; y++)
if (num != 0 && s[e + 1] != accept[y])
cont++;

if (cont == y)
break;

cont = 0;
}

return (num);
}
