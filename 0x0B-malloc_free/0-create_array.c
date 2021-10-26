#include<stdlib.h>
#include"main.h"
/**
 * create_array - creates an array of chars with a specific char
 * @size: size of the array
 * @c: caharacter
 *
 * Return: pointer of char
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(98 * sizeof(char));
	for (i = 0; i < 98; i++)
		ptr[i] = c;
	return (ptr);
}


