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
printf("%d", x * 0);
_putchar(',');
_putchar(' ');
printf("%d", x * 1);
_putchar(',');
_putchar(' ');
printf("%d", x * 2);
_putchar(',');
_putchar(' ');
printf("%d", x * 3);
_putchar(',');
_putchar(' ');
printf("%d", x * 4);
_putchar(',');
_putchar(' ');
printf("%d", x * 5);
_putchar(',');
_putchar(' ');
printf("%d", x * 6);
_putchar(',');
_putchar(' ');
printf("%d", x * 7);
_putchar(',');
_putchar(' ');
printf("%d", x * 8);
_putchar(',');
_putchar(' ');
printf("%d", x * 9);
_putchar('\n');
x++;
}
}
