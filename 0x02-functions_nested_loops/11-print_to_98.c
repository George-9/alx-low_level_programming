#include "main.h"

/**
* print_to_98 - print numbers to 98 depending on the given param
*
* @n: (int) the number
*
* Return: void
*/
void print_to_98(int n)
{
	int loop, first_digit, second_digit;

	if (n == 98)
	{
		_putchar((98 / 10) + '0');
		_putchar((98 % 10) + '0');
	}

	if (n < 98)
	{
		for (loop = n; loop <= 98; loop++)
		{
			first_digit = ((loop / 10) + '0');
			last_digit = ((loop % 10) + '0');
		}
	_putchar(first_digit);
	_putchar(last_digit);
	}

	if (n > 98)
	{
	for (loop = n; loop >= 98; loop--)
	{
		first_digit = ((loop / 10) + '0');
		last_digit = ((loop % 10) + '0');
	}
	_putchar(first_digit);
	_putchar(last_digit);
	}
}
