#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other cahracter in string
 * @str: string param
 *
 * Return: void
 */
void puts2(char *str)
{
int s = strlen(str);
int j = 0;
while (j <= s)
{
if(s % 2 != 0)
{
continue;
}
else
{
if (j != s - 1)
{
printf("%c", str[j]);
}
else
{
printf("%c\n", str[j]);
}
}
j++;
}
}
