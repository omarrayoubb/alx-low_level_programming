#include "main.h"
/**
* print_binary - print
* @n: input
* Description: print
*/
void print_binary(unsigned long int n)
{
	unsigned long int bit, c, count = 0 ;
	long int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		for (i = 63;  i >= 0; i--)
		{
			bit = n >> i;
			c = bit & 1;
			if (c == 1)
			{
				_putchar(c + '0');
				count++;
			}
			else if (count)
				_putchar('0');
		}
	if (!count)
		_putchar('0');
	}
}
