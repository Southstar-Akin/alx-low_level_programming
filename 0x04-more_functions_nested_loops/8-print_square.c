#include "main.h"
/**
 * print_square - iprint squares
 * @size: he dey sharp
 *
 * Return: void
 */
void print_square(int size)
{
int n = size;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (size > 0)
{
while (n > 0)
{
_putchar('\n');
n--;
}
_putchar('\n');
size--;
}
}
}
