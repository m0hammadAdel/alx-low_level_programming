#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - apply the function argument to all array elements
 * @array: array arugment
 * @size: size of the array
 * @action: function pointer to perform
 * Return: nothing, void function
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
