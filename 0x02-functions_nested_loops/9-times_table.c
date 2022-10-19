#include <stdio.h>
#include "main.h"
/**
 * times_table - this is a punction tha prints the times table
 * void
 * Return: returns no value
 */
void times_table(void)
{
int x = 0;
while (x <= 9)
{
_putchar((x * 0) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 1) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 2) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 3) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 4) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 5) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 6) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 7) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 8) + '0');
_putchar(',');
_putchar(' ');
_putchar((x * 9) + '0');
_putchar('\n');
x++;
}
}
