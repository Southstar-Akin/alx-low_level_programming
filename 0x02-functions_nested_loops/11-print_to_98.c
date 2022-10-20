#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers from n to 98
 * @n: nice number
 * Return- always return 0
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n < 98)
{
if (n >= 0 && n <= 9)
{
printf("%d, ", n);
}
else
{
printf("%2d, ", n);
}
}
else
{
printf("%2d", n);
}
n++;
}
printf("\n");
}
else
{
while (n >= 98)
{
if (n > 98)
{
printf("%2d, ", n);
}
else
{
printf("%2d", n);
}
n--;
}
printf("\n");
}
}
