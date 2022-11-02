#include "main.h"
/**
 * print_chessboard - prints the interfav of a chess board
 * @a: param
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
if (i < 7)
{
_putchar('\n');
}
else
{
break;
}
}
}
