#include"main.h"
/**
 * _strcmp - compares two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, result = 0;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
		{
			result = s1[i] - s2[i];
		}
	}
	return (result);
}
