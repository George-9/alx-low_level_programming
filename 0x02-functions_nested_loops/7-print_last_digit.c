#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* @n: that number
*
* Return: the last digit on n
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n < 0 ? (-n % 10) : n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
