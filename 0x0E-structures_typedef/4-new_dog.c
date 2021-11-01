#include"dog.h"
#include<stdlib.h>
/**
* str_copie - copie string in a new allocated memory
* @str: source
*
* Return: pointer to the copie of the string
*/

char *str_copie(char *str)
{
	int i = 0;
	char *copie;

	while (str[i])
		i++;
	copie = malloc((i + 1) * sizeof(char));
	for (i = 0; str[i]; i++)
		copie[i] = str[i];
	copie[i] = '\0';
	return (copie);
}
/**
 * new_dog - creates a new dog
 * @name: dog'name
 * @age: dog's age
 * @owner: dog's owner
 *
 *Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = str_copie(name);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
	new_dog->age = age;
	new_dog->owner = str_copie(owner);
		if (new_dog == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}

	return (new_dog);
}
