#include "main.h"

/**
* print_line - Returns a num 1 or 0 according to the checked character
*
* @n: only parameter
*
* Return: line
*
*/
void print_line(int n)
{
int count;
char data = '_';

	for (count = 0; count <= n; count++)
	{
		data += data;
		putchar(data);
	}
	putchar('\n');
}
