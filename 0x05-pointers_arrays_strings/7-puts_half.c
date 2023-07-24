#include "main.h"
#include <string.h>
/**
 *puts_half - print
 *@str: input
 *Description: print to stdout
 *
 *
 */
void puts_half(char *str)
{
	unsigned long int i, n;

	if (strlen(str) % 2 == 0)
	{
		n = strlen(str) / 2;
	}
	else
	{
		n = ((strlen(str) - 1)/(2));
	}
	for (i = n; i < strlen(str); i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
