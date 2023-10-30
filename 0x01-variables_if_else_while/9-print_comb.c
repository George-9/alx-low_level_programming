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
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
