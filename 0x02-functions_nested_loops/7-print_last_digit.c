#include "main.h"
/**
 * print_last_digit - is as semantic as its name
 *@c: value of integer
 *
 * Return: returns the last digit
 */
int print_last_digit(int c)
{
int s;
if (c < 0)
{
c = -c;
}
s = (c) % 10;
if (s < 0)
s = -s;
_putchar(s + '0');
return (s);
}
