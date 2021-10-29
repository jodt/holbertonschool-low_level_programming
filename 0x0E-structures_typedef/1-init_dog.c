#include"dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: structure dog
 * @name: name's dog
 * @age: dog'age
 * @owner: dog'sowner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
