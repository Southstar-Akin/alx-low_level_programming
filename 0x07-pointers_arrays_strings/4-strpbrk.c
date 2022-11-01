#include "main.h"
#include <string.h>
/**
 * *_strpbrk - searches for cahracter c in string
 * @s: param
 * @c: param
 *
 * Return: 0 or null(if unsucessful)
 */
char *_strpbrk(char *s, char c)
{
char *res = strpbrk(s, c);
return (res);
}
