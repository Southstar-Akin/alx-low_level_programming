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
_putchar((t * 0) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 1) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 2) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 3) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 4) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 5) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 6) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 7) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 8) + '0');
_putchar(',');
_putchar(' ');
_putchar((t * 9) + '0');
}
_putchar('\n');
}
}
