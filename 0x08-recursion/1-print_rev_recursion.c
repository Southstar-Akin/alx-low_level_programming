#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _print_rev_recursion - reverses a string
 * @s: param
 *
 * Return: reversed string
 */
void _print_rev_recursion(char *s)
{
int le = strlen(s) - 1;
int i;
for (i = 0; le > i; le--)
{
printf("%c", s[le]);
}
printf("\n");
}
