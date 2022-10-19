#include <stdio.h>
/**
 * main - run the code
 * don't fo
 * Return: alwasy return 0
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
void print_alphabet(void)
{
char A;
for (A = 'a'; A <= 'z'; A++)
{
putchar(A);
}
}
