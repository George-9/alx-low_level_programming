#include "function_pointers.c"

/**
*
*
*
*
*
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t loop;
	
	if (!array || !size || !action)
		return;

	for (loop = 0; loop < size; loop++)
	{
		action(*(array + loop));
	}
}
