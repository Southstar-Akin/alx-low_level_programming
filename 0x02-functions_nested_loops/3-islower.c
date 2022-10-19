#include "main.h"
/**
 * _islower - you know the vibes man
 */
int _islower(int c)
{
int result;
int v = islower(c);
if (v == 0)
{
result = '0';
}
else
{
result = '1';
}
return (result);
}
