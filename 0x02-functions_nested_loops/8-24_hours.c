#include "main.h"

/**
* jack_bauer - rpints every minute of the day
*
* Return: void
*/

void jack_bauer(void)
{
	int f, s;

	for (f = 0; f <= 23; f++)
	{
		for (s = 0; s <= 59; s++)
		{
			if (f < 10)
				print_number(0);

			print_number(f);
			_putchar(':');

			if (s < 10)
				print_number(0);

			print_number(s);
			_putchar('\n');
		}
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
