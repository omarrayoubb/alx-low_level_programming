#include "main.h"
/**
 * more_numbers - print
 *
 * Description: print numbers from 0-14 10 times
 *
 *
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
	_putchar('\n');
	i++;
	}
}
