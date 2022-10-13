#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array with data
 * @size: The size of the array
 * @cmp: function_pointer
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
