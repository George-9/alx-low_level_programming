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

	int l, i;
	char *begin_ptr, *end_ptr, ch;

	l = strlen(str);

	begin_ptr = str;
	end_ptr = str;

	for (i = 0; i < l - 1; i++)
		end_ptr++;

	for (i = 0; i < l / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
	putchar('\n');
}
