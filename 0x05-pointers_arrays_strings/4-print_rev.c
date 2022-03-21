#include "main.h"

/**
* print_rev - returns the param as a reversed string
*
* @s: param
* Return: String
*/
void print_rev(char *s)
{
int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
