#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a character in a string
 * @haystack: is a pointer
 * @needle: is a pointer
 * Return: number of bytes repeated
 */

char *_strstr(char *haystack, char *needle)
{
int e, num = 0, cont;

for (cont = 0; needle[cont] != '\0'; cont++)
;

for (; *haystack != '\0'; haystack++)
{
if (*haystack == needle[0])
{
num++;
haystack++;
for (e = 1; e < cont; e++, haystack++)
{
if (*haystack == needle[e])
num++;

else
{
haystack--;
num = 0;
break;
}

}
}

if (num == cont)
break;

}


if (num == cont)
return (haystack - cont);
else
return (0);
}
