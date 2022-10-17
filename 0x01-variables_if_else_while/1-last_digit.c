#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main - more headers goes there
 * make nobidy stress me
 * Return: this is somthing
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lDig = n % 10;
char text[] = "Last digit of";
if (lDig > 5)
{
printf("%s %d is %d and is greater than 5\n", text, n, lDig);
}
else if (lDig == 0)
{
printf("%s %d is %d and is 0\n", text, n, lDig);
}
else if (lDig > 0 && lDig < 6)
{
printf("%s %d is %d and is less than 6 and not 0\n", text, n, lDig);
}     
return (0);
}
