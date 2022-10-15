#include <stdio.h>
/**
 * main - this prints the size of various data types
 * Return: 0 is returned if successful
 */
int main(void)
{
printf("Size of a char: %d bytes(s)\n", sizeof(char));
printf("Size of an int: %d bytes(s)\n", sizeof(short int));
printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
printf("Size of a float: %d bytes(s)\n", sizeof(float));
return (0);
}
