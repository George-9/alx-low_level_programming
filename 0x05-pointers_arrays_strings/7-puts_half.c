#include "main.h"

/**
*
*
*
*
*
*
*/
void puts_half(char *str)
{
int length, looper;

	length = sizeof(str);
	for (looper = 0; looper < length; looper++)
	{
		if(looper >= length / 2)
		{
			printf("%c", str[looper]);
		}
	}
}
