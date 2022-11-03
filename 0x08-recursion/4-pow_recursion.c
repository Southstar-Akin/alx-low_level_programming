#include "main.h"
#include <math.h>
/**
 * pow_recursion - raises the power of param x to y
 * @x: param
 * @y: param
 *
 * Return: raise
 */
int _pow_recursion(int x, int y)
{
int raise;
if (y < 0)
{
return (-1);
}
raise = pow(x, y);
return (raise);
}
