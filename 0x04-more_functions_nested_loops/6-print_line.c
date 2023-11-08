#include "main.h"

/**
* print_line - prints a line
* @n: the lenght of the line
*
* Return: void
*/
void print_line(int n)
{
	int i;
	char c;

	i = 0;
	c = '_';

	for (; i < n; i++)
		_putchar(c);

	_putchar('\n');
}
