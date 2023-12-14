#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts string binary
 * @b: the string of binary characters
 *
 * Return: number formed from the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l, n = 0;

	if (b == NULL)
		return (0);

	for (l = strlen(b) - 1; ; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		n = (n << 1) | (b[l] - '0');
		if (l == 0)
			return (n);
	}
}
