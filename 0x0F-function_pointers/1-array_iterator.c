#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - iterates and performs actions to values of a given array
*
* @array: the array to iterate
* @size: size of the array
* @action: the action to do to the elements of the array
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t loop = 0;

	if (!array || !size || !action)
		return;

	while (loop < size)
	{
		action(*(array + loop));
		*array++;
		loop++;
	}
}
