#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: destination string
 * @src: string to be concat
 *
 * Return: DEst 
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
