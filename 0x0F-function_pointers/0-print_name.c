#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_name - prints a name to the terminal
*
* @name: text to print
* @f: pointer to function for printing text to the terminal
*
* Return: void (void function)
*/
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
