#include "variadic_functions.h"

int _putchar(char c);
void print_number(int);

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
	unsigned int i, l, r;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		l = va_arg(args, int);
		print_number(l);
		if ((i + 1) != n)
		{
			for (r = 0; separator[r] != '\0'; r++)
				_putchar(separator[r]);
		}
	}
	va_end(args);
	_putchar('\n');
}

/**
 * print_number - prints a number
 * @n: the number
 *
 * Return: none
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if ((n / 10) != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
