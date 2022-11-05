#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - multiplies the arguments
 * @argc: first param
 * @argv: second param
 *
 * Return: 1 if unsuccessful and 0 if otherwise
 */
int main(int argc, char* argv[])
{
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}
