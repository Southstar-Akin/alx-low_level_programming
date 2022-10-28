#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: string to be concatenated
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
dest[strlen(dest) - 1] = '\0';
return (dest);
}
