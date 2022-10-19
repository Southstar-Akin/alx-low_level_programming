#include "main.h"
#include <ctype.h>
/**
 * _islower - you know the vibes man
 */
int _islower(int c)
{
int result;
if (islower(c))
{
result = '1';
}
else
{
result = '0';
}
return result;
}
