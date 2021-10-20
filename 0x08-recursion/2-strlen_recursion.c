#include"main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length
 */
#include<stdio.h>
int _strlen_recursion(char *s)
{
	int length = 0;

	if (!(*s))
		return (length);
	length++;
	return (length + _strlen_recursion(s + 1));
}
