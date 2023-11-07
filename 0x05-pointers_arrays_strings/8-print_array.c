#include <stdio.h>

/**
* print_array - prints all the elements of an array
*
* @a: the array
* @n: number of elements in the array
* Return: void
*/
void print_array(int *a, int n)
{
	int l;

	l = 0;
	for (; l < n; l++)
	{
		printf("%d", a[l]);
		if (l < n - 1)
		{
			printf("%c", ',');
			printf("%c", ' ');
		}
	}
	printf("%c", '\n');
}
