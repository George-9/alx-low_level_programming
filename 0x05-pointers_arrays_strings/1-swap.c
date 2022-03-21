#include "main.h"

/**
* swap_int - swaps values of int a and b
*
* @a: first parameter (Integer)
* @b: second ....... (Integer)
*
*Return: void
*
*/

void swap_int(int *a, int *b)
{
	int *temp = a;
	int *temp1 = b;

	a = &temp1;
	b = &temp;
}
