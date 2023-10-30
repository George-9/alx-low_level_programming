#include <stdio.h>

/**
* main - main entry
*
* Return: (0) if zero errors
*/
int main(void)
{
	int i;

	i = 0;
	for (; i < 10; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
