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
i = strlen(s) - 1;
while (i >= 0)
{
if (i != 0)
{
i--;
}
else
{
break;
}
*s = s[i];
}
}
