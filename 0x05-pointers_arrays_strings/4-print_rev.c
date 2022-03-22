#include "main.h"

/**
* print_rev - returns the param as a reversed string
*
* @s: param
* Return: String
*/
void print_rev(char *s)
{
int i, len;

	len = strlen(s);

	for (i = len; i > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
