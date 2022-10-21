#include "main.h"
/**
 * print_line - prints a sraight line to the terminal
 * @n: is the number of caharacters to print
 *
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
