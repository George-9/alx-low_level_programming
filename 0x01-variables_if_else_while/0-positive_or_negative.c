#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -program entry point
*
* Return: (0) if zero errors
*/
int main(void)
{
	int n;
	char *msg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	msg = n < 0 ? "is negative" : n == 0 ? "is zero" : "is positive";

	printf("%d ", n);
	puts(msg);

	return (0);
}
