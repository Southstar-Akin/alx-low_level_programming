#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - primts the string characters in reverse
 * @s: paramter passed
 *
 * Return: returns void
 */
void print_rev(char *s)
{
int i;
i = strlen(s) - 1;
while (i >= 0)
{
if (i > 0)
{
printf("%d", s[i]);
}
else
{
printf("%d\n", s[i]);
}
i--;
}
}
