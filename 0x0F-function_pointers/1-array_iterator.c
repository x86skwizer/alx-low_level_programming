#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array of int
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size == 0 || !action)
		return;
	i = 0;
	while (i < size)
	{
		if (!array[i])
			return;
		action(array[i++]);
	}
}
