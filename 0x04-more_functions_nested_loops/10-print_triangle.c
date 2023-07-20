#include "main.h"
/**
 * print_triangle - triangle
 * @size: input
 * Description: triangle making
 *
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size == 0)
		_putchar('\n');
	else
	{
	for (i = 1; i <= size; i++)
	{

		for (j = 1 ; j <= size; j++)
		{
			if (j + i > size)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');

	}
	}
}
