#include "main.h"
/**
 * is_prime_number - prints prome number
 * @n: param
 *
 * Return: void
 */
int is_prime_number(int n)
{
if (n % 1 == 0 && n % n == 0)
{
return (1);
}
return (0);
}
