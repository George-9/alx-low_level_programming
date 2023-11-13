#include "main.h"

/**
 * print_chessboard - prints an array of character arrays
 * @a: the array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, l;

	while (i < 8)
	{
		l = 0;
		while (l < 8)
		{
			_putchar(a[i][l]);
			l++;
		}
		if (i != 8)
			_putchar('\n');
		i++;
	}
}
