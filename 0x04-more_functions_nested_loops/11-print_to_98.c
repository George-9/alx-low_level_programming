#include "main.h"

/**
* print_to_98 - prints from the given number upto 98
*
* @n: the starting point
*
* Return: void
*/
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", 98);
		return;
	}

		printf("%d, ", n);

	if (n < 98)
		print_to_98(n + 1);

	else if (n > 98)
		print_to_98(n - 1);
}
