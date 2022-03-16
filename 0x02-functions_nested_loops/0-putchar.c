#include "main.h"

/**
* main Entry point
*
* @c holds data for text to be printed to stdio
*
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

/**
* printInfo prints some text to the standard output.
* It's being created in the haeder file "main.h".
* char "c" holds the vale to be printed
*/
void printInfo(char *c)
{
	/**
	* char "c" holds the vale to be printed
	*/
	while (*c)
	{
		/**
		* char "c" holds the vale to be printed
		*/
		putchar(*c++);
		if (!(*c))
		{
			/**
			* char "c" holds the vale to be printed
			*/
			putchar('\n');
			break;
		}
	}
}
