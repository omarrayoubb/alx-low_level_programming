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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int i, count = 0, x = atoi(argv[argc - 1]);
		int arr[5] = {25, 10, 5, 2, 1};

		for (i = 0 ; i < 5; i++)
		{
			if (x >= arr[i])
			{
				count += x / arr[i];
				x = x % arr[i];
				if (x == 0)
					break;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
