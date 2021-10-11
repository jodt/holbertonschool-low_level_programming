#include"main.h"
/**
 * rev_string - function that reverses a string
 *@s: string
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
	s[end] = ('\0');
}
