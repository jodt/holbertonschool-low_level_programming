#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 or 1 if number of arguments incorrect
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 2)
	{
	for (i = 1; i < argc; i++)
		result *= atoi(argv[i]);
	printf("%d\n", result);
	return (0);
	}
	printf("Error\n");
	return (1);

}
