#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer using a comparison function.
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to a function to compare values
 *
 * Return: Index of the first match or -1 if no match or invalid input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

