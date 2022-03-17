#include "main.h"

/**
* print_alphabet - lower given
* character and print to stdio
*
* @void: hold chars/text to be printed
*
* Return: void
*/
void print_alphabet_x10(void)
{
int c;

	for (c = 0; c < 11; c++) 
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
