#include "main.h"

/**
* puts_half - print half of a given string
*
* @str: param
*
* Return: void
*
*/
void puts_half(char *str)
{
int length, looper;

	length = strlen(str);
	for (looper = 0; looper < length; looper++)
	{
		if (looper >= length / 2)
		{
			printf("%c", str[looper]);
		}
	}
	putchar('\n');
}
