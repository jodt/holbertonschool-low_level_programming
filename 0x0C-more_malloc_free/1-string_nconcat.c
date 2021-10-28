#include<stdlib.h>
#include<stdio.h>
#include"main.h"
/**
 * string_nconcat - concatenate two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 *
 * Return: pointer a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lengths1 = 0, lengths2 = 0;
	char *ptr;

	if (s1 == NULL)
		lengths1 = 0;
	else
		lengths1 = _strlen(s1);
	if (s2 == NULL)
		n = lengths2 = 0;
	else
	{
		lengths2 = _strlen(s2);
		n >= lengths2 ? n = lengths2 : n;
	}
	ptr = malloc((lengths1 + n + 6) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (lengths1 == 0 && lengths2 == 0)
		*ptr = '\0';
	if (lengths1 != 0 && lengths2 == 0)
	{
		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
		ptr[i] = '\0';
	}
	else if (lengths1 == 0 && lengths2 != 0)
	{
		for (i = 0; i < n; i++)
			ptr[i] = s2[i];
		ptr[i] = '\0';
	}
	else if (lengths1 != 0 && lengths2 != 0)
	{
		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
		for (j = 0; j < n; j++)
			ptr[i + j] = s2[j];
		ptr[i + j] = '\0';
	}
	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length;
 */
unsigned int _strlen(char *s)
{
	unsigned int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
