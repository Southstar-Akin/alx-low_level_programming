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
putchar(d);
if (d != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
