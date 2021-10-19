#include"main.h"
#define NULL 0
/**
 * find_first_char - find the first character which match
 * @haystack: string
 * @needle: second string
 *
 * Return: Position of character in the first string
 */
int find_first_char (char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != needle[0])
	{
		if ((!(haystack[i])) || (!(needle[i])))
			return (0);
		i++;
	}
	return (i);
}
/**
 * _strstr -  locates a substring
 * @haystack: string
 * @needle: word
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, position, j = 0;

	position = find_first_char(haystack, needle);
	while  (haystack[i] && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
		{
			while (haystack[i] != needle[0])
			{
				if (!(haystack[i]))
					return (NULL);
				i++;
			}
			j = 0;
			position = i;
		}
	}
	if (!(needle[j]))
		return (haystack + position);
	else
		return (NULL);
}
