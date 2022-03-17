#include "main.h"

/**
* print_numbers - returns product of a and b
*
* @void: void parameters
* @a: incrementer
*
* Return: void
*/
void print_numbers(void)
{
char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == 9)
		{
			putchar('\n');
		}
	}
}
