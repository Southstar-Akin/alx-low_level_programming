#include <stdio.h>
/**
 * main - this prints the size of various data types
 * Return: 0 is returned if successful
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
fprintf(stderr, "\[Anything\]\n");
return (0);
}