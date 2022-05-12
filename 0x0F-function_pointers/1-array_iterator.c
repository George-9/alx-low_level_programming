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
