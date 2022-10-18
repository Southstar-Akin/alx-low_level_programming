#include <stdio.h>
/**
 * main - this na code
 * no even whine me
 * Return: returns 0 idf successful
 */
int main(void)
{
char C;
for (C = 'a'; C <= 'z'; C++)
{
if (C == 'q' || C == 'e')
{
return;
}
else
{
putchar(C);
}
}
putchar('\n');
return (0);
}
