#include "main.h"

/**
  * _strcmp - compare 2 strings
<<<<<<< HEAD
  * @s1; string 1
  * @s2: string 2
  *
=======
  * @s1: string 1
  * @s2: string 2
  * Return: int
>>>>>>> c6ec437f92c8efc502d7010111bf696bd3591529
  */

int _strcmp(char *s1, char *s2)
{
	int e = 0, cmp = 0;

	while (s1[e] != '\0' && s2[e] != '\0' && cmp == 0)
	{
		cmp = s1[e] - s2[e];
		e++;
	}

	return (cmp);
}
