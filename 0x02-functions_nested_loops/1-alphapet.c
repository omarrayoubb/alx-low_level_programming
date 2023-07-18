#include <stdio.h>
#include "main.h"
/**
 * print_alphabet , alphabet
 *
 * Description: print from a to z 
 *
 * Return: 0 always means success
 */ 
void print_alphabet(void)
{	char i = 'a';
	while(i <='z')
	{
	 	_putchar(i);
		i++;
	}
	_putchar('\n');

}
