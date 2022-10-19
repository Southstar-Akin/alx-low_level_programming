#include "main.h"
#include <stdio.h>
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
printf("%d", s);
return (s);
}
