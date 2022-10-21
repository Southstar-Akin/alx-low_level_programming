#include "main.h"
/**
 * print_diagonal - prints a diagonal line to the terminal
 * @n: is the number of caharacters to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('\\');
n--;
}
_putchar('\n');
}
}
