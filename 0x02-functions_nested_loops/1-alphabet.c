#include "main.h"

/**
* main - Entry point
*
*
* Return: always 0 (if Success)
*/
int main(void)
{
	printInfo((lowerAlphabets("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n")));
	return (0);
}

/**
* lowerCharacter - lower given
* character and print to stdio
*
* @c: hold chars/text to be printed
* @checker: check if all alphabets are printed
*/
char *lowerAlphabets(char c[])
{
int looper, len = (strlen(c));
char *checker = NULL;
	for (looper = 0; looper < len; looper++)
	{
		*checker += (tolower(c[looper]));
	}
	return (c);
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
