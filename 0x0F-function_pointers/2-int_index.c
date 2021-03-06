#include<stdlib.h>
#include"function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: numebr of elements in the array
 * @cmp: pointer to function to compare value
 *
 * Return: index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
	}
	return (-1);
}
