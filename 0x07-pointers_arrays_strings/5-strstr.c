#include"main.h"
#define NULL 0
/**
 * _strstr - finds the first occurrence of a substring
 * @needle: substring
 * @haystack: string
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, position = 0, length_needle = 0, match = 0;

	while (needle[j])
	{
		length_needle++;
		j++;
	}
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				position = i;
				match++;
			}
			if (match == length_needle - 1)
				return (haystack + position);
		}
	}
	return (NULL);
}
