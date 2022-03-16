#include "main.h"

/**
* main Entry point
*
*
* Return: always 0 (Success)
*/
int main(void)
{
	printInfo("_putchar");
	return (0);
}

void printInfo(char *c)
{
	 while(*c) putchar(*c++);
}

