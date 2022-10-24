#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - primts the string characters in reverse
 * @s: paramter passed
 *
 * Return: returns void
 */
void rev_string(char *s)
{
int i;
int j = 0;
i = strlen(s) - 1;
while (j <= i)
{
printf("%c", s[i]);
i--;
}
}
