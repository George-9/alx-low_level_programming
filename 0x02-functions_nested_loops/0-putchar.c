#include "main.h"

/**
* main Entry point
*
* @d: holds data
*
* @main: calls printf function
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
* @printInfo: has one para. called to print info
* printInfo: prints param to stdio
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
