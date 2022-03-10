#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
		printf("%s\n", argv[e]);

	return (0);
}
