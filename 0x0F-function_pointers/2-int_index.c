#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - return the index of element of array
 * @array: array
 * @size : size of array
 * @cmp: function pointer
 * Return: index if success or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
