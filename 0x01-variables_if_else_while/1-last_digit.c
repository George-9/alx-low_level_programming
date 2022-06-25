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
	char *a, *b, *c;

	int n, d;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	a = "and is greater than 5";
	b = "and is 0";
	c = "and is less than 6 and not 0";
	d = n % 10;

	printf("Last digit of %d is %d and is %s", n, d, d > 5 ? a : d == 0 ? b : c);

	return (0);
}
