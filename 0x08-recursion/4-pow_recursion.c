#include "main.h"
#include <math.h>
/**
 * _pow_recursion - raises the power of param x to y
 * @x: param
 * @y: param
 *
 * Return: raise
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
 return (x * _pow_recursion(x, y - 1));
}
