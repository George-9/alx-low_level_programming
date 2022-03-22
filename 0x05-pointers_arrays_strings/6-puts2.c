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

	size = strlen(str);
	for (len_looper = 0; len_looper < size; len_looper += 2)
	{
		putchar(str[len_looper]);
	}
	puts("\n");
}
