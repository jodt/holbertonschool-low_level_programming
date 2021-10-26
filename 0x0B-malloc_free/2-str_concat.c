#include<stdlib.h>
#include"main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 *Return: pointer to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int lengths1, lengths2, i, j, k;

	if (s1 == NULL)
		lengths1 = 0;
	else
		lengths1 = _strlen(s1);
	if (s2 == NULL)
		lengths2 = 0;
	else
		lengths2 = _strlen(s2);
	ptr = malloc((lengths1 + lengths2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = 0; j < lengths1; i++, j++)
	{
		ptr[i] = s1[j];
	}
	for (k = 0; k < lengths2; i++, k++)
	{
		ptr[i] = s2[k];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length;
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

