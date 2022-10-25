#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n values of the array
 * @a: argument
 * @n: argument
 */
void print_array(int *a, int n)
{
int k = 0;
while (k <= n - 1)
{
if (k < n - 1)
{
printf("%d, ", a[k]);
k++;
}
else
{
printf("%d", a[k]);
k++;
break;
}
}
printf("\n");
}
	
