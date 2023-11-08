#include <stdio.h>

void print_number(int n);

/**
* main - program entry point
*
* Return: (0) if zero errors
*/
int main(void)
{
	int i;

	i = 1;
	for (; i < 101; i++)
	{
		if ((i %  3) == 0 && (i % 5) == 0)
			printf("%s", "FizzBuzz");
		else if ((i % 3) == 0)
			printf("%s", "Fizz");
		else if ((i % 5) == 0)
			printf("%s", "Buzz");
		else
			print_number(i);
		if (i <= 99)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

/**
* print_number - prints an integer
* @n: the number
*
* Return: void
*/
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	putchar(n % 10 + '0');
}
