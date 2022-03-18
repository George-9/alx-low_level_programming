#include "main.h"

/**
* print_diagonal - Returns a num 1 or 0 according to the checked character
*
* @n: only parameter
*
* Return: line
*
*/
void print_diagonal(int n)
{
int count;
char data = '\\';

	for (count = 1; count <= n; count++)
	{
		if (n <= 0)
		{
			putchar('\n');
			return;
		}
		putchar(data);
	}
	putchar('\n');
}

