#include<stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: return 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (l = j; l < 58; l++)
				{
					if (i == 48 && j == 48 && k == 48)
						l++;
					if (l == j && j != 48)
						l++;
					putchar(i);
					putchar(j);
					putchar (' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
