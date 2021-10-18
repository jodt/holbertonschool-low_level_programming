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
	int i = 0, j = 0, position = 0, length_needle = 0;
	while (needle[i])
	{
		length_needle++;
		i++;
	}
	length_needle -= 1;
	i = 0;
	while (needle[i])
	{
		while (haystack[j] != needle[i])
			j++;
		position = j;
		while (haystack[j] == needle[i])
		{
			i++;
			j++;
			length_needle--;
			if (length_needle == 0)
				return (haystack + position);
		}
	}
	return (0);
}
