#include "main.h"
/**
 * jack_bauer - prints all the minutes of the day
 *
 * Return: does not return anything
 */
void jack_bauer(void)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
while(a <= 2)
{
while (b <= 3)
{
while (c <= 5)
{
while (d <= 9)
{
if(d != 9)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
d++;
 }
else
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
d = 0;
    }
}
c++;
}
b++;
}
a++;
}
}
