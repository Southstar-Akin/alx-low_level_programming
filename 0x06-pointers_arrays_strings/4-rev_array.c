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
_putchar(a[i]);
_putchar(',');
_putchar(' ');
i--;
}
else
{
_putchar(a[i]);
i--;
}
_putchar('\n');
}
}
