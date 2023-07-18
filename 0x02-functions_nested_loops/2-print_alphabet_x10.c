#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - alphabet
 *
 * Description: print from a to z
 *
 * Return: 0 always means success
 */
void print_alphabet_x10(void)
{

	int i = 0;
	char j = 'a';
	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	i++;
	_putchar('\n');
	}
}
