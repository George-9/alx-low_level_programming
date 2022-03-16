#include "main.h"

/**
* main Entry point
*
* Return: always 0 (Success)
*
*/
int main(void)
{
	printInfo("_putchar");
	return (0);
}

/**
* printInfo - has one parameter. called to print info
*
* @d: one param
*/
void printInfo(char *d)
{
	while (*d)
	{
		putchar(*d++);
		if (!(*d))
		{
			putchar('\n');
			break;
		}
	}
}
