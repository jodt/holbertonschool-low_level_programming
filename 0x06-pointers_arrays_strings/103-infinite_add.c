#include"main.h"
#include<stdio.h>
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
/**
 * rev_string - reverse array of string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, end = 0, j, temp;

	while (s[end])
		end++;
	j = end - 1;
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}
}
/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: size buffer
 *
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, addition = 0;

	i = _strlen(n1) - 1;
	j = _strlen(n2) - 1;
	for (k = 0; (i >= 0 || j >= 0) && k < size_r; k++)
	{
		if (i >= 0 && j >= 0)
			addition += (n1[i] - '0') + (n2[j] - '0');
		else if (i < 0)
			addition += n2[j] - '0';
		else if (j < 0)
			addition += n1[i] - '0';
		if (addition > 9)
		{
			r[k] = (addition % 10) + '0';
			addition = 1;
		}
		else
		{
			r[k] = addition + '0';
			addition = 0;
		}
		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}
	if  (k >= size_r)
		return (0);
	if (i < 0 && j < 0 && addition == 1)
	{
		r[k] = 1 + '0';
		r[k + 1] = '\0';
		k++;
	}
	if (k >= size_r)
		return (0);
	rev_string(r);
	r[k] = '\0';
	return (r);
}
