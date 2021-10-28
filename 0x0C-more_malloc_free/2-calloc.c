#include"main.h"
#include<stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = {0};

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
