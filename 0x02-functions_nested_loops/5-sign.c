#include "main.h"
/**
 * print_sign - show lowercase upper
 * @n: integer
 * Description: show me
 *
 * Return: 0 means no 1 means yes
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
