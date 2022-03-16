#include "main.h"

/**
* main - Entry point
*
*
* Return: always 0 (if Success)
*/
int main(void)
{
	lowerAlphabets("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
	return (0);
}

/**
* lowerCharacter - lower given
* character and print to stdio
*
* @c: hold chars/text to be printed
*/
void lowerAlphabets(char *c)
{
	while(*c)
	{
		putchar(tolower(*c));
	}
}
