#include<stdlib.h>
#include"function_pointers.h"
/**
 * array_iterator - executes a function  on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
		return;
	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

