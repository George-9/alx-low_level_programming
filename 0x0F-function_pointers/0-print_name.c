#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

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
	if (!name || !f)
		return;

	f(name);
}
