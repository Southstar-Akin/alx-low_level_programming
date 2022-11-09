#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters, and
 * initializes it with a specific char
 * @size: the size of the array
 * @c: the char to fill the array with
 *
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
unsigned int s;
char *t;
t = (char *) malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
for (s = 0; s < size; s++)
t[s] = c;
return (t);
}
