#include "main.h"
/**
 * *_memset - changes the memory spca of s yo constant b
 * @s: first param
 * @b: second param
 * @n: last param
 *
 * Return: the pointer adress
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
 while (j < n)
{
s[j] = b;
j++;
}
return (s);
}
