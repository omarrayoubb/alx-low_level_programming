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
	int result = 0;
	char *cha;

	while (--argc)
	{
		for (cha = argv[argc] ; *cha; cha++)
	{
			if (*cha < '0' || *cha > '9')
			{
			printf("Error\n");
			return (1);
			}
	}
	result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
