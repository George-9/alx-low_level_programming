#include "main.h"

/**
* print_square - print a square using #
*
* @size: print square these number of times
*
* Return: void
*/
void print_square(int size)
{
int loop, count;

	for (loop = 1, loop < size; loop++)
	{
		for (count = 1; count < size; count++)
		{
			if (count <= 0)
			{
				putchar('\n');
			}
			else
			putchar('#');
		}
		putchar('\n');
	}
}
