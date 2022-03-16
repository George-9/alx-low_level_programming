#include "main.h"

/**
* main Entry point
*
*
* Return: always 0 (Success)
*/
int main(void)
{
	/**
	* print "_putcahr" to the standard output.
	*/
	printInfo("_putchar");
	return (0);
}

/**
* print info prints some text to the standard output.
* It's being created in the haeder file "main.h".
*
*/
void printInfo(char *c)
{
	/**
	* char "c" holds the vale to be printed
	*/
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
