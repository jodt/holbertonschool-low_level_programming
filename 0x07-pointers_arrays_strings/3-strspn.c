#include"main.h"
/**
 * _strspn - that gets the length of a prefix substring
 * @s: string
 * @accept: bytes accept
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0, find = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			find = 0;

			if (s[i] == accept[j])
			{
				count++;
				find = 1;
				break;
			}
		}
		if (find == 0)
			return (count);
	}
	return (count);
}
