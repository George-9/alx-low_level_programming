#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

/**
* main - Entry point
*
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));

	n = RAND_MAX / 2;

	char *a = "and is greater than 5";
	char *b = "and is 0";
	char *c = "and is less than 6 and not 0";
	int d = n % 10;

	printf("Last digit of %d is %d and is %s", n, d, d > 5 ? a : d == 0 ? b : c);

	return (0);
}
