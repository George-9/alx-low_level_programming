#include "main.h"

/**
* print_array - prints elements of array a
*
* @n: param1
* @a: first param
*
* Return: void
*/
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (len == sizeof(a))
		return;
		printf("%d, ", a[len]);
	}
	puts("\n");
}
