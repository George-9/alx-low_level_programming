#include <stdio.h>

/**
* main -program entry point
*
* Return: (0) if zero errors
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e')
		{
			if (c != 'q')
				putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
