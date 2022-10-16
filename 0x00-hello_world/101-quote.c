#include <stdio.h>
/**
 * main - this is a program that prints the belo line of text to standard error
 * Return: returns 1 if successful
 */
int main(void)
{
const char quote[] = "and that piece of art is useful";
fprintf(stderr, "%s\" - Dora Korpar, 2015-10-19\n", quote);
return (1);
}
