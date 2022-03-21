#include "main.h"

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d, ", a[len]);
	}
	puts("\n");
}
