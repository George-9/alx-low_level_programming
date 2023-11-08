#include "main.h"

/**
* print_numbers - prints 0 to 9
*
* Return: (0) if zero errors
*/
void print_numbers(void)
{
	int i;

	i = 0;
	for (; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
