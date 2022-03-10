#include "main.h"

/**
  * _atoi - convert a string into an int
  * @s: string
  * Return: int
  */

int _atoi(char *s)
{
	int sign = 1, e = 0;
	unsigned int res = 0;

	while (!(s[e] <= '9' && s[e] >= '0') && s[e] != '\0')
	{
		if (s[e] == '-')
			sign *= -1;
		e++;
	}
	while (s[e] <= '9' && (s[e] >= '0' && s[e] != '\0'))
	{
		res = (res * 10) + (s[e] - '0');
		e++;
	}
	res *= sign;
	return (res);
}
