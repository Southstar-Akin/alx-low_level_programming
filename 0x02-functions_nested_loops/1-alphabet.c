#include <stdio.h>
#include "main.h"
/**
 * main - run the code
 *
 * Return: alwasy return 0
 */
void print_alphabet(void)
{
int A;
for (A = 'a'; A <= 'z'; A++)
{
putchar(A);
}
return (0);
}


int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
