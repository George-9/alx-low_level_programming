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
	int tmp, last_digit;

	tmp = n < 0 ? (n * -1) : n;
	last_digit = tmp % 10;
	last_digit = last_digit < 0 ? -last_digit : last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
