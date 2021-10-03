#include<stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: return 0
 */
int main(void)
{
	int i = 48, j = 48, k = 48, l = 48;

	while (i < 58 && j < 58)
	{
		if (i >= 48 && j > 48 && k == 58 && l == 48)
		{
			k = i;
			l = j + 1;
		}
		else
		{
			k = 48;
			l = 49;
		}
		while (k < 58 && l < 58)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			putchar(k);
			putchar(l);
			if (i != 57 || j != 56)
			{
				putchar(',');
				putchar(' ');
			}
			l == 57 ? l = 48, k++ : l++;
		}
		j == 57 ? j = 48, i++ : j++;
		i == k ? j++ : '\0';
	}
	putchar ('\n');
	return (0);
}
