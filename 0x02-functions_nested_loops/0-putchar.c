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

/**
* printInfo prints some text to the standard output.
* text is the only param.
*
* It's being created in the haeder file "main.h".
*
* @d: holds the vale to be printed
*/
void printInfo(char *d)
{
	/**
	* char "c" holds the vale to be printed
	*/
	while (*d)
	{
		/**
		* char "c" holds the vale to be printed
		*/
		putchar(*d++);
		if (!(*d))
		{
			/**
			* char "c" holds the vale to be printed
			*/
			putchar('\n');
			break;
		}
	}
}
