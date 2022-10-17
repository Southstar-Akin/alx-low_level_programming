#include <stdio.h>
/**
 * main - this na code
 * no even whine me
 * Return: returns 0 idf successful
 */

int main (void)
{
const char alpha[] = "abcdefghijklmn";
const char alp[] = "opqrstuvwxyz";
int a;
for (a = 0;a < 26; a++)
{
if (a < 14)
{
putchar(alpha[a]);
}
else
{
a = 0;
putchar(alp[a]);
}
}
return (0);
}
