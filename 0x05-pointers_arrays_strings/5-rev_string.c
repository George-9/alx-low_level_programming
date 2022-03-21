#include "main.h"

/**
* rev_string - returns the param as a reversed string
*
* @s: param
* Return: String
*/
void rev_string(char *s)
{
int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	puts(s);
}
