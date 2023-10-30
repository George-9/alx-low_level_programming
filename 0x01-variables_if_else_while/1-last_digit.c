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
	int n, ld;
	char *msg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n < 0 ? n % 10 : n % 10;

	if (ld == 0)
		msg = " and is zero";
	else if (ld < 6 && ld != 0)
		msg = " and is less than 6 and not 0";
	else
		msg = " and is greater than 5";

	printf("Last digit of ");
	printf("%d %s %d", n, "is", ld);
	puts(msg);

	return (0);
}
