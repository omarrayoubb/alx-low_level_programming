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
	unsigned long int j;

	for (j = 0; str[j] != '\0'; j++)
		;

	j++;
	for (j = j / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);

	}
	_putchar('\n');
}
