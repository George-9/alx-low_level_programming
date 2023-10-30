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
	char *msg, *msg_tmp1, *msg_tmp2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n < 0 ? -n % 10 : n % 10;

	msg_tmp1 = " and is greater than 5";
	msg_tmp2 = " and is less than 6 and not 0";
	msg = ld > 5 ? msg_tmp1 : n == 0 ? "and is zero" : msg_tmp2;

	printf("Last digit of ");
	printf("%d %s %d", n, "is", ld);
	puts(msg);

	return (0);
}
