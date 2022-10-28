#include <stdio.h>
#include "main.h"
/**
 * reverse_array - prints array in reverse
 * @a: array
 * @n: size of array
 * 
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = n - 1;
while (i => 0)
{
if (i != 0)
{
printf("%d", a[i]);
printf(",");
printf(" ");
i--;
}
else
{
printf("%d", a[i]);
i--;
}
printf("\n");
}
}
