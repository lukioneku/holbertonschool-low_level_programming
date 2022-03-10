#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: pointer to the duplicated string or 0
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int e;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (e = 0; str[e] != '\0'; e++)
			strnew[e] = str[e];
	} else
	{
		return (NULL);
	}
	strnew[e] = '\0';
	return (strnew);
}
