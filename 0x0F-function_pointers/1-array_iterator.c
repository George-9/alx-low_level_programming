#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: - the list of integers
 * @size: the number of elements of the list
 * @action: the function to call on each integer
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	c = 0;
	for (; c < size; c++)
		action(array[c]);
}
