#include <stdio.h>
/**
 * main - this na code
 * no even whine me
 * Return: returns 0 idf successful
 */

int main(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz\\";
int a;
char b[] = "n";
for (a = 0; a < 27; a++)
{
putchar(alpha[a]);
}
putchar(b[0]);
return (0);
}
