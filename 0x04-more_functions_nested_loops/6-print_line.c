#include "main.h"
/**
 * print_line - print
 * @n: input
 * Description: print a straight line
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
