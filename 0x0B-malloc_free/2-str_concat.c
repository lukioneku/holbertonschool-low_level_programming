#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to newly allocated space in memory or 0
 */
char *str_concat(char *s1, char *s2)
{
	char *strnew = NULL;
	unsigned int e;
	int b1;
	int b2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (b1 = 0; s1[b1] != '\0'; b1++)
		;
	for (b2 = 0; s2[b2] != '\0'; b2++)
		;
	strnew = (char *)malloc((b1 + b2 + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (e = 0; s1[e] != '\0'; e++)
		strnew[e] = s1[e];
	for (; s2[count] != '\0'; e++)
	{
		strnew[e] = s2[count];
		count++;
	}
	return (strnew);
}
