#include "main.h"

/**
* puts2 - prints every other value of array from the first
*
* @str: param
*
* Return: void
*/
void puts2(char *str)
{
int len;

	for (len = 0; len < sizeof(str); len += 2)
	{
		puts(str[len]);
	}
}
