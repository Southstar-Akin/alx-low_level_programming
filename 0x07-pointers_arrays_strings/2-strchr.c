#include "main.h"
#include <string.h>
/**
 * *_strchr - searches for cahracter c in string
 * @s: param
 * @c: param
 *
 * Return: 0 or null(if unsucessful)
 */
char *_strchr(char *s, char c)
{
char res[];
res = strchr(s, c);
return (res);
}
