#include <stdio.h>

/**
 * main - prints the numbers 1 - 100,
 *   instead of multiples of 3, print Fizz
 *   instead of multiples of 5, print Buzz
 *   for multiples of 3 and 5, print FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	int e;

	for (e = 1; e <= 100; e++)
	{
		if (e % 3 == 0 && e % 5 == 0)
			printf("FizzBuzz");
		else if (e % 3 == 0)
			printf("Fizz");
		else if (e % 5 == 0)
			printf("Buzz");
		else
			printf("%d", e);
		if (e != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
