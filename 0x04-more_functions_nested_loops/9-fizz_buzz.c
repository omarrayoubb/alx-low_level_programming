#include "main.h"
#include <stdio.h>
/**
 * main - fizz buzz
 *
 * Description: fiz buzz printa
 *
 * Return: 0 alwasys means success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
