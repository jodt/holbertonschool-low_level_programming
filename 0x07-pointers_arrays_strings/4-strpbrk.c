#include"main.h"
#define NULL 0
/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string
 * @accept: bytes accepted
 *
 *Return: pointer to the byte in s that matches or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
