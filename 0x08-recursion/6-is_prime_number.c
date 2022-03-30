#include "main.h"

/**
* is_prime_number - check if n is a prime number recursively
*
* @n: number to check
*
* Return: int
*/
int is_prime_number(int n)
{
	if ((n % is_prime_number(n - 1)) > 0)
	return (0);
	return (1);
}
