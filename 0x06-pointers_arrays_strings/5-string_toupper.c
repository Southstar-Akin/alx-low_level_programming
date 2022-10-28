#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes to uppercase
 * @a: param
 *
 * Return: void
 */
char *string_toupper(char *a)
{
int le;
for (le = 0; le < sizeof(a) - 1; le++)
{
if (!toupper(a[je]))
{
printf("%c", toupper(a[je]));
}
else
{
printf("%c", a[je]);
}
}
printf("\n");
}
