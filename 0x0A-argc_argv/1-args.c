#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to the cl
 * @argc: first param
 * @argv: second param
 *
 * Return: 0 if successful
 */
int main(int argc, char* argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
