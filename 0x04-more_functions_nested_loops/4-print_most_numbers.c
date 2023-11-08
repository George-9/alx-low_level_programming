#include "main.h"

/**
* print_most_numbers - prints 0 to 9 except 2 and 4
*
* Return: (0) if zero errors
*/
void print_most_numbers(void)
{
	int i;

	i = 0;

	for (; i < 10; i++)
	if (i != 2)
	if (i != 4)
		_putchar(i + '0');

	_putchar('\n');
}
