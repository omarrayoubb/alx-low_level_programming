#include "main.h"

/**
 * print__sign - show me the sign
 * @n: integer
 *
 * Description: sign ign
 * Return: 0 if zero 1 if positive -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}

	else
	{
	_putchar('-');
	return (-1);
	}
}
