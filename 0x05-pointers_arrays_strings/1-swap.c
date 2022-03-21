#include "main.h"

/**
* swap_int - swaps values of int a and b
*
* @a: first parameter (Integer)
* @b: second ....... (Integer)
* @c: temporary holder
*
* Return: void
*
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = *&c;
}
