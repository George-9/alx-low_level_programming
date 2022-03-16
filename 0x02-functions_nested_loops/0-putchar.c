#include "main.h"

/**
* main Entry point
*
* @d: holds data for text to be printed to stdio
* text
* main calls printf function
*
*Return: always 0 (Success)
*
*/
int main(void)
{
	/**
	* printInfo prints "_putcahr" to the standard output.
	*/
	printInfo("_putchar");
	return (0);
}

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
