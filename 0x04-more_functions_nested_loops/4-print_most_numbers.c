#include "main.h"
/**
 * print_most_numbers - print
 *
 * Description: print numbers from 0-9
 *
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar(i / 1 + '0');
			i++;
		}
	}
	_putchar('\n');
}
