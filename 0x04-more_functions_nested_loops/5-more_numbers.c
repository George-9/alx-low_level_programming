#include "main.h"

/**
* more_numbers - print numbers 1-14
*
* @void: no parameters
* Return: void
*
*/
void more_numbers(void)
{
int looper, num_count;

	for (looper = 0; looper < 11; looper++)
	{
		for (num_count = 0; num_count < 15; num_count++)
		{
			putchar(num_count);
		}
	}
	putchar('\n');
}
