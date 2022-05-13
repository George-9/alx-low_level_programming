#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer in an array
*
* @array: array holding the integers
* @size: size of array
* @cmp: the return (depends on whether the integer is found or not
*
* Return: int (-1 or 0)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int loop;

	if (!array || !size || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (loop = 0; loop < size; loop++)
	{
		if ((cmp(array[loop]) != 0))
		{
			return (loop);
		}
	}

	return (-1);

}
