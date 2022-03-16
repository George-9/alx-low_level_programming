#include "main.h"

/**
* main Entry point
*
*
* Return: always 0 (Success)
*/
int main(void)
{
	printInfo("_putchar");
}

void printInfo(char *c)
{
	while (*c)
	{
		putchar(*c++);
		if (!(*c))
		{
			putchar('\n');
			break;
		}
	}
}
