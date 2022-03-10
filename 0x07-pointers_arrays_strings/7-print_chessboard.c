#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - locates a character in a string
 * @a: is a pointer
 * Return: number of bytes repeated
 */

void print_chessboard(char (*a)[8])
{
int e, y;
for (e = 0; e < 8; e++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[e][y]);
}
_putchar('\n');
}
}
