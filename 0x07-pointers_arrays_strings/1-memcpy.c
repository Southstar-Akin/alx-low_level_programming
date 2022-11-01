#include "main.h"
#include <string.h>
/**
 * *_memcpy - copies n values of src to dest
 * @dest: pointer
 * @src: pointer
 * @n: var
 *
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
