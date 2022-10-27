#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concantenates dtrings
 * @dest: fisrt param
 * @src: second param
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
dest[strlen(dest) - 1] = NULL;
return (dest);
}
