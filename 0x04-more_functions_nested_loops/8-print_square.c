#include "main.h"

/**
* print_square - prints square
* @size: the size of the square
*
* Return: void
*/
void print_square(int size)
{
	int i, l;

	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
			_putchar('#');

		_putchar('\n');
	}
}
