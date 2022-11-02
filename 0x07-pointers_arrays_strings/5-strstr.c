#include "main.h"
#include <string.h>
/**
 * *_strstr - searches for cahracter c in string
 * @haystack: param
 * @needle: param
 *
 * Return: 0 or null(if unsucessful)
 */
char *_strstr(char *haystack, char *needle)
{
char *res = strstr(haystack, needle);
if (res != NULL)
{
return (haystack);
}
else
{
return (res);
}
}
