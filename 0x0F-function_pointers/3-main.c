#include "3-calc.h"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>
/**
* main - ...
* @argc: ...
* @argv: ...
* Description: .......
*
* Return: 0 if success or 98 99 100 if error or null
*/
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]);
	int (*sum)(int, int);

	sum = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*if (!argv[2] || strlen(argv[2]) > 1 || !sum)
	{
		printf("Error\n");
		exit(99);
	}*/
	if ((atoi(argv[3]) == 0) && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", sum(a, b));
	return (0);
}
