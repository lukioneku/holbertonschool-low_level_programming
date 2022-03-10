#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates a character in a string
 * @s: is a pointer
 * @accept: is a pointer
 * Return: number of bytes repeated
 */

char *_strpbrk(char *s, char *accept)
{
int e, y, num = 0;


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

if (num != 0)
return (s + e);

}

return (0);
}
