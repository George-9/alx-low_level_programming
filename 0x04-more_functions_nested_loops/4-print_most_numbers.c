#include "main.h"

/**
* print_most_numbers - prints 1 to 10 except nums '2' and '4'
*
* @void: void param
*
* Return: void
*/
void print_most_numbers(void)
{
char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == 2 || a == 4)
		continue;

		if (a == 9)
		{
			putchar('\n');
		}
	}
}
