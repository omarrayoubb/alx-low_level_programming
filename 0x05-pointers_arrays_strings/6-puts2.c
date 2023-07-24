#include "main.h"
#include <string.h>
/**
 *puts2 - print
 *@str: input
 *Description: print to stdout
 *
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);

	}
	_putchar('\n');
}
