#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - frees dogs
 * @d: pointer to a dog's structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}


