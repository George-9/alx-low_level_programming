#include <stdio.h>

/**
* main - main entry
*
* Return: (0) if zero errors
*/
int main(void)
{
	size_t i, t;

	i = 0;
	for (; i < 10; i++)
	{
		for (t = 1; t < 10; t++)
		{
			if (i != t)
			{
				putchar(i + '0');
				putchar(t + '0');

				if ((i + t) != 17)
					putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
