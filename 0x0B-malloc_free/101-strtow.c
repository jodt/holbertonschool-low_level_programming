#include<stdlib.h>
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
 * sizeofword - count characters of each word
 * @str: string
 * @word: numbers of word
 *
 * Return: pointer to an array with size of each word
 */
int *sizeofword(char *str, int word)
{
	int i, j, nc, *sizearray;

	i = j = nc = 0;
	sizearray = malloc((word) * sizeof(int));

	while (i < word)
	{
		nc = 0;
		while (str[j] == ' ')
			j++;
		while (str[j] != ' ' && str[j])
		{
			nc++;
			j++;
		}
		if (!(str[j]))
			break;
		sizearray[i] = nc;
		i++;
	}
	return (sizearray);
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
	int i, j, k, word, *sizeword;

	j = k = word = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	word = numberofwords(str);
	ptr = malloc((word + 1) * sizeof(char *));
	sizeword = sizeofword(str, word);
	for (i = 0; i < word; i++)
		ptr[i] = malloc((sizeword[i] + 1) * sizeof(int));
	i = 0;
	while (i < word)
	{
		j = 0;
		while (str[k] == ' ')
			k++;
		while (str[k] != ' ' && str[k])
		{
			ptr[i][j] = str[k];
			j++;
			k++;
		}
		if (str[k] == '\0')
			break;
		ptr[i][j] = '\0';
		i++;
	}
	return (ptr);
}
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length;
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
