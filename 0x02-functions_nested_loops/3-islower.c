#include "main.h"
/**
 * _islower - you know the vibes man
 */
int _islower(int c)
{
int result;
if (!islower(c))
{
result = '0';
}
else
{
result = '1';
}
return (result);
}
