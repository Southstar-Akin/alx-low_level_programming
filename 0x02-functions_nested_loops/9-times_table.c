#include <stdio.h>
#include "main.h"
/**
 * times_table - this is a punction tha prints the times table
 * void
 * Return: returns no value
 */
void times_table(void)
{
int x = 0;
while (x <= '9')
{
printf("%d", x * 0);
printf(",");
printf(" ");
printf("%d", x * 1);
printf(",");
printf(" ");
printf("%d", x * 2);
printf(",");
printf(" ");
printf("%d", x * 3);
printf(",");
printf(" ");
printf("%d", x * 4);
printf(",");
printf(" ");
printf("%d", x * 5);
printf(",");
printf(" ");
printf("%d", x * 6);
printf(",");
printf(" ");
printf("%d", x * 7);
printf(",");
printf(" ");
printf("%d", x * 8);
printf(",");
printf(" ");
printf("%2d", x * 9);
printf("\n");
x++;
}
}
