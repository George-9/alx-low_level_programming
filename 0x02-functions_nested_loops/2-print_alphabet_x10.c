#include "main.h"

/**
* print_alphabet - lower given
* character and print to stdio
*
* @void: hold chars/text to be printed
*
* Return: void
*/
void print_alphabet(void)
{
int c;

	for (i = 0; i < 11; i++) 
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
