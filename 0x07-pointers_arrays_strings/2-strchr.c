#include"main.h"
#define NULL 0
/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 *
 *Return: pointer to the first occurrence of the character c in the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
		if (!(s[i]))
			return (NULL);
	}
	return (s + i);
}
