#include <stdio.h>
/**
 * main - function to complete the fizzbuzz test
 *
 * Return: returns nothing
 */
void main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0)
{
printf("Fizz");
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", a);
}
}
}
