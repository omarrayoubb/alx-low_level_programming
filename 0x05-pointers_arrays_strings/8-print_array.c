#include <stdio.h>
#include "main.h"
/**
 * print_array - print
 * @a:input
 * @n:input
 *Description: print array
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			printf("\n");
		else
			printf(", ");
	}
	}
}

