#include "main.h"
/**
 * jack_bauer - prints all the minutes of the day
 *
 * Return: does not return anything
 */
void jack_bauer(void)
{
int a;
int b;
int c;
int d;
for (a = 0; a <= 2; a++)
{
for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
if (a != 2)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
else if (a < 3 && b < 4)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
else
{
break;
}
}
}
}
}
}

