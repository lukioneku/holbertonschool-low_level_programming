#include "main.h"

/**
 * _isalpha - detects letter wether upper or lower
 * @c: detects letter
 * Return: 1
 *
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);

		else
			return (0);

}
