#include"main.h"
/**
 * checkcharacter - check each character of strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 or 0;
 */
int checkcharacter(char *s1, char *s2)
{
	if (*s2 == '*' && (!*(s2 + 1)))
		return (1);
	if (*s1 != *s2 && *s2 == '*')
		return (checkcharacter(s1, s2 + 1));
	if (*s1 != *s2  && *(s1 + 1) && *(s2 - 1) == '*')
		return (checkcharacter(s1 + 1, s2));
	if (*s1 == *s2 && *(s2 + 1) && *(s2 + 1) != '*')
		return (checkcharacter(s1 + 1, s2 + 1));
	if (*s1 != *s2 && *s1 && *(s2+1) !='*')
                return (checkcharacter(s1 + 1, s2));
	if (*s1 == *s2 && !*(s1 + 1) && !*(s2 + 1))
		return (1);
	if (*s1 != *s2)
		return (0);


	return (checkcharacter(s1 + 1, s2 + 1));
}



/**
 * wildcmp - compare two string
 * @s1: string one
 * @s2: string two
 *
 *Return: 1 if string are the same
 */
int wildcmp(char *s1, char *s2)
{
	return (checkcharacter(s1, s2));
}
