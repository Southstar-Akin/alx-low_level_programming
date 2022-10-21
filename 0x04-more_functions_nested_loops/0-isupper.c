#include "main.h"
#include <ctype.h>
/**
 * _isupper - you know the vibes man
 * @c: this returns nice things
 *
 * Return: this retuns an interger 1/0
 */
int _isupper(int c)
{
int result;
if (isupper(c))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
