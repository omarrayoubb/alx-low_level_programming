#include "main.h"
/**
 * print_diagonal - print
 * @n: input
 * Description: print a diagonal
 *
 */
void print_diagonal(int n)
{
	int i = 1;
	int j = 1;

	if (n <= 0)
		_putchar('\n');
	while (i <= n)
	{
		j = 0;
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
