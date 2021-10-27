#include<stdlib.h>
#include<stdio.h>
#include"main.h"
#define IN 1
#define OUT 0
/**
 * numberofwords - count words of a string
 * @str: string
 *
 * Return: number of words
 */
int numberofwords(char *str)
{
	int i = 0, word = 0, inword;

	inword = OUT;
	while (str[i])
	{
		if (str[i] == ' ')
			inword = OUT;
		else if (inword == OUT)
		{
			inword = IN;
			word++;
		}
		i++;
	}
	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer of an array of words
 */
char **strtow(char *str)
{
	char **ptr = {0};
	int i, j = 0, k, nc = 0, wordbegin;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (!(numberofwords(str)))
		return (NULL);
	ptr = malloc((numberofwords(str) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			k = 0;
			wordbegin = i;
			nc = wordlen(str + i);
			if (nc > 0)
				ptr[j] = malloc((nc + 1) * sizeof(char));
			if (ptr[j] == NULL)
			{
				while (j > 0)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
			nc = 0;
			i = wordbegin;
			while (str[i] != ' ' && str[i])
			{
				ptr[j][k] = str[i];
				i++;
				k++;
			}
			ptr[j][k] = '\0';
			j++;
		}
	}
	return (ptr);
}
/**
 * wordlen  - returns the length of a string
 * @s: the string
 * Return: the length;
 */
int wordlen(char *s)
{
	int count = 0;

	while (s[count] != ' ' && s[count])
		count++;
	return (count);
}
