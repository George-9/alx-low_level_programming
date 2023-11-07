#include "main.h"

/**
* reset_to_98 - sets the value of an integer to 98
*
* @n: the integer
*
* Return: void
*/
void reset_to_98(int *n)
{
	int **r = &n;
	**r = 98;
}
