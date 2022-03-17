#include "main.h"

/**
* print_Alphabet - lower given
* character and print to stdio
*
* @void: hold chars/text to be printed
*/
void print_alphabet(void)
{
	printInfo("abcdefghijklmnopqrstuvwxyz");
}

/**
* printInfo - has one parameter. called to print info
*
* @d: one param
*
* Return: 0 or 1 (0 if Success)
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
