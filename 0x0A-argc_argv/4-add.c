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
	int i, x, result = 0;

	if (argc <= 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);
			if (*argv[i] < '0' || *argv [i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				result += x;
		}
	printf("%d\n", result);
	}
	return (0);
}
