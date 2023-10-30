#include <stdio.h>

/**
* main - main entry
*
* Return: (0) if zero errors
*/
int main(void)
{
	int n;
	char a;

	n = 0;
	a = 'a';
	for (; n <= 9; n++)
		putchar(n + '0');

	for (; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
