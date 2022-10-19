#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers from n to 98
 *
 * Return- always return 0
 */
void print_to_98(int n)
{
while (n <= 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
}
}
