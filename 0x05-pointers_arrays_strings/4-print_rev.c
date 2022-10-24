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
int j = 0;
while (j <= i)
{
if (i > 0)
{
printf("%c", s[i]);
}
else
{
printf("%c\n", s[i]);
}
i--;
}
}
