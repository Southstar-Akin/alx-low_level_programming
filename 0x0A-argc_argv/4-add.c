#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - sums down intergers
 * @argc: first param
 * @argv: second param
 *
 * Return: 1 if unsuccesful and 0 is itherwise
 */
int main(int argc, char* argv[])
{
  int i, sum, num;
  char a, z;
  char* at = &a;
  char* az = &z;
  a = 'a';
  z = 'z';
if (argc < 1)
{
printf("0\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
if (argv[i] >= at && argv[i] <= az)
{
printf("Error\n");
return (0);
}
num = atoi(argv[i]);
sum += num;
}
printf("%d\n", sum);
return (0);
}
}
	  
