#include"dog.h"
#include<stdio.h>
/**
 * print_dog - print dog's structure
 * @d: pointer to a dog's structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	if (d->age == 0)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);

}
