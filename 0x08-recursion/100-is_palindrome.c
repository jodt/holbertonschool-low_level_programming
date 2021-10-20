#include"main.h"
/**
 * lengthofstring - find length of string
 * @n: integer
 * @s: string
 *
 * Return: length
 */
int lengthofstring(int n, char *s)
{
	if (s[n] == '\0')
		return (n);
	return (lengthofstring(n + 1, s));
}

/**
 * issamecharacter - check character by character
 * @s: string
 * @start: value of depart
 * @length: length of the string
 * Return: 1 or 0
 */
int issamecharacter(char *s, int  start, int length)
{
	

	if (s[start] == s[length] && (start == length || start == length - 1))
		return (1);
	if (s[start] != s[length])
		return (0);

	return (issamecharacter(s, start + 1, length - 1));
}
/**
 * is_palindrome - check  if a string is a palindrome
 * @s: string
 *
 * Return: 1 if string is a palindrome
 */
int is_palindrome(char *s)
{
	int start = 0, length;

	length = lengthofstring(0, s);
	length -= 1;
	return (issamecharacter(s, start, length));
}
