#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints number from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
int a = 1;
while (a <= 10)
{
for (b = 0; b <= 14; b++)
{
printf("%d", b);
}
_putchar('\n');
a++;
}
}
