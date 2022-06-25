#include "main.h"
/**
* print_sign - chaecks for n if positive, negative or a 0
*
* @n: first and only parameter (one to be checked)
*
* Description: prints "0" if n is zero "-" if n is negative otherwise "1"
*
* Return: -1 if n is negative 0 if n is 0 or 1 if n is positive
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('+');
	return (1);
}
