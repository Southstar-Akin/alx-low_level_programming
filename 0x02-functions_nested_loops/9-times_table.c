#include "main.h"
/**
 * times_table - this is a punction tha prints the times table
 * void
 * Return: returns no value
 */
void times_table(void)
{
int t;
int x = 0;
for (t = 0; t <= 9; t++)
{
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
x++;
}
_putchar('\n');
}
}
