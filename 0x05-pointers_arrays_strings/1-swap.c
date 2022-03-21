#include "main.h"

/**
* swap_int - swaps values of int a and b
*
* @*a: first parameter (Integer)
* @*b: second ....... (Integer)
*
*Return: void
*
*/

void swap_int(int *a, int *b)
{
	int *temp;

	*temp = *a;
	*a = *b;
	*b = *a;

	printf("a=%d, b=%d\n", a, b);
	printf("a=%d, b=%d\n", a, b);
}
