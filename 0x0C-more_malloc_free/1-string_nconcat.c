#include<stdlib.h>
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
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(1 * sizeof(char));
		*ptr = '\0';
	}
	else if (s2 == NULL)
	{
		ptr = malloc((_strlen(s1) + 1) * sizeof(char));
		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
		ptr[i] = '\0';
	}
	else if (s1 == NULL)
	{
		if (n >= _strlen(s2))
			n = _strlen(s2);
		ptr = malloc((n + 1) * sizeof(char));
		for (i = 0; i < n; i++)
			ptr[i] = s2[i];
		ptr[i] = '\0';
	}
	else
	{
		ptr = malloc((_strlen(s1) + n + 1) * sizeof(char));
		if (n >= _strlen(s2))
			n = _strlen(s2);
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
