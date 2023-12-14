#include "main.h"

/**
 * get_bit - gets bit value of a number
 *
 * @n: the number
 * @index: the position to convert the bit
 *
 * Return: 1 on success, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b_s, s_value;

	if (index > 63)
		return (-1);

	b_s = n >> index;
	s_value = b_s & 1;

	return (s_value);
}
