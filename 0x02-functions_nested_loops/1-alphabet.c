#include "main.h"

/**
* main - Entry point
*
*
* Return: always 0 (if Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* printAlphabets - lower given
* character and print to stdio
*
* @void: hold chars/text to be printed
* @checker: check if all alphabets are printed
*/
void print_alphabet()
{
	printInfo("abcdefghijklmnopqrstuvwxyz\n");
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

