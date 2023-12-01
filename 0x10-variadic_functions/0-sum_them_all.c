#include "variadic_functions.h"

/**
 * sum_them_all - adds numbers
 * @n: the variadic counter
 *
 * Return: the sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, t = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		t += va_arg(args, int);
	}

	va_end(args);

	return (t);
}
