#include <stdio.h>

/**
* main -program entry point
*
* Return: (0) if zero errors
*/
int main(void)
{
	int looper;

	looper = 49;
	while (looper < 75)
	{
		printf("%c", looper + '0');
		looper++;
	}

	looper = 17;
	while (looper < 43)
	{
		putchar(looper + '0');
		looper++;
	}

	putchar('\n');

	return (0);
}
