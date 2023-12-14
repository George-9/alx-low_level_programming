#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the integer
 * @index: the position to shift the bit
 *
 * Return: 1 on success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int converter;

	if (index > 63)
		return (-1);

	converter = 1 << index;
	*n = *n | converter;

	return (1);
}
