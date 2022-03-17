#include "main.h"

int main(void)
{
	print_numbers();
}
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
int i;
int a;
a = 1;
	while ((i = getchar()) != EOF)
	{
		putchar(a);
		if (a == 9)
		{
			putchar('\n');
			break;
		}
		++i;
	}
}
