#include "main.h"
#include <string.h>
/**
 * _strspn - function the searches and returns the number of matching bytes in 2 string
 * @s: param
 * @accept: param
 *
 * Return: null/ interger
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int res = strspn(s, accept);
return (res);
}
