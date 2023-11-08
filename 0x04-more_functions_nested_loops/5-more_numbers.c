#include "main.h"

void print_number(int n);

/**
* more_numbers - prints 0 to 14 10 times
*
* Return: (0) if zero errors
*/
void more_numbers(void)
{
	int i, l;

	l = 1;
	for (; l < 11; l++)
	{
		for (i = 0; i < 15; i++)
			print_number(i);
		_putchar('\n');
	}
}

/**
* print_number - prints an integer
* @n: the number
*
* Return: void
*/
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
