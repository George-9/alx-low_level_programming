#include <stdio.h>

/**
* main - main entry
*
* Return: (0) if zero errors
*/
int main(void)
{
	size_t i;

	i = 0;
	for (; i < 90; i++)
	{
		if (i < 10)
		{
			putchar('0');
			putchar(i + '0');
		}
		else
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}

		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
