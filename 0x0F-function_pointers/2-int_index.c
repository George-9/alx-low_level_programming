/**
 * int_index - searches for an integer
 * @array: the list where to search
 * @size: the number of elements in array
 * @cmp: (function pointer)compares the elements
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size < 0)
		return (-1);

	c = 0;
	for (; c < size; c++)
	{
		if (cmp(array[c]))
			return (c);
	}
	return (-1);
}
