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
	unsigned int i, numberofelements;
	char *new_ptr;
	char *old_ptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL && new_size == 0)
		free(ptr);
	else
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && ptr != NULL)
	{
		new_ptr = malloc(new_size);
		numberofelements = old_size / sizeof(char);
		for (i = 0; i < numberofelements; i++)
			new_ptr[i] = old_ptr[i];
		free(ptr);
	}
	return (new_ptr);
}

