#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: pointer to array, or 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int e;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (e = 0; e < size; e++)
				array[e] = c;
		}
	}
	return (array);
}
