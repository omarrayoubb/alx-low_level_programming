#include "stdio.h"
#include "stdlib.h"
/**
 * main - input
 * @argc: counter
 * @argv: strings
 * Description: say hello to my little friend
 *
 * Return: 0 means success
 */
int main(int argc, char *argv[])
{
	int i, x, result = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);
			result *= x;
		}
	printf("%d\n", result);
	return (0);
	}
}
