#include "main.h"
/**
 * print_square - print
 * @size: input
 * Description: print a square
 *
 */
void print_square(int size)
{
	int i = 1;
	int j = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	}
}
