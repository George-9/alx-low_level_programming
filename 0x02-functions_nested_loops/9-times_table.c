#include "main.h"

/**
* times_table - prints the multiplication table
*
* Return: void
*/
void times_table(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (l = 0; l < 10; l++)
		{
			print_number(i * l);

			if ((i * l) != 81)
			{
				if (l < 9)
				{
					_putchar(',');
					_putchar(' ');
				}

				if ((i * l) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

/**
* print_number - prints an integer
*
* @n: the number
* Return: void
*/
void print_number(int n)
{
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
