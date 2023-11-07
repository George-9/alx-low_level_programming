#include "main.h"

/**
* puts2 - prints every other character of a string
*
* @str: that string
* Return: void
*/
void puts2(char *str)
{
	int chckr;
	char c = *str;

	chckr = 0;
	while (*str != '\0')
	{
		c = *str++;
		if (chckr % 2 == 0)
			_putchar(c);

		chckr++;
	}
	_putchar('\n');
}
