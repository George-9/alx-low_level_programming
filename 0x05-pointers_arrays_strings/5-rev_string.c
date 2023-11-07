#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
*
* @str: the string
* Return: void
*/
void rev_string(char *str)
{
	int i, j;
	char *cnt = str;

	j = i = 0;

	while (*cnt++ != '\0')
		j++;

	j -= 1;

	while (i < j)
	{
		char tmp = str[i];

		str[i] = str[j];
		str[j] = tmp;

		i++;
		j--;
	}
}
