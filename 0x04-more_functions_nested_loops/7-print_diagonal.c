#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: the length of the line
*
* Return: void
*/
void print_diagonal(int n)
{
	int i, l, u;
	char c;

	i = 0;
	c = '\\';

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 0; i < n; i++)
	{
		for (u = 0; u < l; u++)
			_putchar(' ');
		_putchar(c);
		_putchar('\n');
		l++;
	}
}
