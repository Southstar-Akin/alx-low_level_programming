#include "main.h"
#include <ctype.h>
/**
 * _isalpha - you know the vibes man
 * @c: this returns nice things
 *
 * Return: this retuns an interger 1/0
 */
int _isdigit(int c)
{
int result;
if (isdigit(c))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
