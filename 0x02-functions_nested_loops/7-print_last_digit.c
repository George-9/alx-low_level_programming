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

	last_digit = num % 10;

	printf("%d", last_digit);

	return (last_digit);
}
