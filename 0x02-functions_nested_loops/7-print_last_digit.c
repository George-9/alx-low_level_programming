#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* @num: int (the number)
*
* Return: last digit (as absolute value)
*/
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num < 0 ? (num * -1) % 10 : num % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
