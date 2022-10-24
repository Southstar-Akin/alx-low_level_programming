#include "main.h"
/**
 * swap_int - swaps the values of the ints
 * @a: first int
 * @b: second int
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;
*a = d;
*b = c;
}
