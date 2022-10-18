#include <stdio.h>
/**
 * main - this is the time to live
 * yes it is my brother halleluyah
 * Return: come back home my boy
 */

int main(void)
{
int d = '0';
for (d = '0'; d <= '9'; d++)
{
if (d != '9')
{
putchar(d);
putchar(',');
putchar(' ');
}
else
{
putchar(d);
}
}
return (0);
}
