#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character printed between the numbers
 * @n: variadic counter
 *
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, l;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		l = va_arg(args, int);
		printf("%i", l);

		if ((i + 1) != n)
		{
			if (separator == NULL)
				printf(" ");
			else
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("%c", '\n');
}
