#include "main.h"
/**
 * _isupper - checks if character is uppercase
 * @c: is the character
 *
 * Return: 1 for true, 0 for fals
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
