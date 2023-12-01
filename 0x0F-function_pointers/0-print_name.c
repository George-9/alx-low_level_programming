#include "function_pointers.h"

/**
 * print_name - prints a name through an underlying function
 * @name: the name
 * @f: the function
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
