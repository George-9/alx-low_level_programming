#include "main.h"

/**
* rev_string - returns the param as a reversed string
*
* @s: param
* Return: String
*/
void rev_string(char *s)
{
int i, len;

	len = strlen(s);

	for (i = (len - 1); i > -1; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
