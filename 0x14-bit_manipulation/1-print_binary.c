#include "main.h"
/**
* print_binary - print
* @n: input
* Description: print
*/
void print_binary(unsigned long int n)
{
	unsigned long int dup, bit, count = 0, c;
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
		dup = n;
		while (dup > 0)
		{
			dup = dup / 2;
			count++;
		}
		for (i = count - 1 ;  i >= 0; i--)
		{
			bit = n >> i;
			c = bit & 1;
			_putchar(c + '0');
		}
	}
}
