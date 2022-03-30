#include "main.h"

/**
* factorial - gets factorial of a number
*
* @n: the number to get the factorial
*
* Return: int
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 1)
	return (1);

	return (n * factorial(n -1));
}
