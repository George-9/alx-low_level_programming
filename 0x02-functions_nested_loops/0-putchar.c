#include "main.h"

/**
* main - program entry point
*
* @void: no params
*
* Return: int always 0 on Success
*
*/
int main(void)
{
	char *data;

	data = "_putchar";

	while(*data)
	{
		putchar(*data);
		data++;
	}
	putchar('\n');
	return(0);
}
