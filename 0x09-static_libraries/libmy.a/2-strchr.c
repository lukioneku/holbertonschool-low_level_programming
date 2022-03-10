#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: is a pointer
 * @c: is a variable
 * Return: 0
 */

char *_strchr(char *s, char c)
{
int e;

for (e = 0; s[e] != c && s[e] != '\0'; e++)
;

if (s[e] != c)
return (0);

else
s = s + e;

return (s);
}
