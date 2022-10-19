#include "main.h"
/**
 * jack_bauer - prints all the minutes of the day
 *
 * Return: does not return anything
 */
void jack_bauer(void)
{
int h = 00;
int mi = 00;
while(h <= 24)
{
for(mi = 00; m <= 59; m++)
{
_putchar(h);
_putchar(':');
_putchar(mi);
_putchar('\n');
}
h++;
_putchar('\n');
}
}
