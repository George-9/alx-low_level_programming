#include "main.h"

/**
* puts_half - prints the last half of a string
*
* @str: that string
* Return: void
*/
void puts_half(char *str)
{
	int chckr, n;
	char *tmp = str;

	chckr = n = 0;
	while (*tmp++ != '\0')
		chckr++;

	n = ((chckr % 2) == 0) ? chckr / 2 : ((chckr - 1) / 2 );
	for (; n < chckr; n++)
		_putchar(*(str + n));

	_putchar('\n');
}
