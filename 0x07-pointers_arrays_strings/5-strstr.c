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
	int i = 0, j = 0, position = 0;

	while (needle[i])
	{
		while (haystack[j] != needle[i])
			j++;
		position = j;
		while (haystack[j] == needle[i] && needle[i] && haystack[j])
		{
			i++;
			j++;
		}
		return (haystack + position);
	}
	return (NULL);
}
