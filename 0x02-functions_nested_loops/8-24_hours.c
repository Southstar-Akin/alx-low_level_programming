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
int d = 0;
for(a = 0; a <= 2; a++)
{
for (b = 0; b <= 3; b++)
{
for (c = 0; c <= 5; c++)
{
while (d <= 9)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
d++;
}
}
}
}
}
