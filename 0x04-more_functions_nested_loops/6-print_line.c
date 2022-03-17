#include "main.h"

int main(void) { print_line(10); return (0);}
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
		putchar(data);
	}
	putchar('\n');
}
