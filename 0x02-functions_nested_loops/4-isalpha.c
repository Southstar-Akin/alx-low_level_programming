#include "main.h"
#include <ctype.h>
/**
 * _isalpha - you know the vibes man
 * @c: this returns nice things
 *
 * Return: this retuns an interger 1/0
 */
int _isalpha(int c)
{
int result;
if (isalpha(c) || islower(c) || isupper(c))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
