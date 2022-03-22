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
int len_looper;
int size;

	size = sizeof(str);
	for (len = 0; len_looper < size; len += 2)
	{
		puts(str[len_looper]);
	}
}
