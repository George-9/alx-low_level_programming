#include "main.h"

/**
* times_table - prints the multiplication table
*
* Return: void
*/
void times_table(void)
{
	int s, l;

	for (s = 0; s < 10; s++)
	{
		for (l = 0; l < 10; l++)
		{
			print_number(s * l);

			if (l < 9)
			{
				_putchar(',');
				_putchar(' ');
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
