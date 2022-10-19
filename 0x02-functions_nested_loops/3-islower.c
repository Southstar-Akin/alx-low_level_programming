#include "main.h"
#include <ctype.h>
/**
 * _islower - you know the vibes man
 * @c: this returns nice things
 * 
 * Return: this retuns an interger 1/0
 */
int _islower(int c)
{
int result;
if (islower(c))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
