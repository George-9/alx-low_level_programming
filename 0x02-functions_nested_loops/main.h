#include <stdio.h>
#include <stdlib.h>
void printInfo(char *c);
void printInfo(char *c)
{
	while(*c) putchar(**c++);
}
