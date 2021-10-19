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
	int i = 0, j = 0, length_needle = 0, count = 0, temp = 0;

	while (needle[i])
	{
		length_needle++;
		i++;
	}
	i = 0;
	while (haystack[i])
	{
		temp = i;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
				count++;
			i++;
			j++;
		}
		if (count == length_needle)
			return (haystack + temp);
		j = count = 0;
		i = temp;
		i++;
	}
	return (NULL);
}
