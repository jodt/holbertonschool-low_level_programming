#include"main.h"
#include<stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of ptr
 * @new_size: new size of ptr
 *
 * Return: pointer to a reallocated  memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *old_ptr;

	old_ptr	= ptr;
	if (new_size == old_size)
		return (ptr);

	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
			new_ptr[i] = 0;
	}
	else if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
		free(ptr);
	}
	return (new_ptr);
}

