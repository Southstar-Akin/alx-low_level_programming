#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 */
void print_alphabet_x10(void)
{
int t;
for (t = 1; t <= 10; t++)
{
char A = 'a';
while (A <= 'z')
{
_putchar(A);
A++;
}
_putchar('\n');
}
}
