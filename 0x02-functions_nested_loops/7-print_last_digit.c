#include "main.h"
/**
 * print_last_digit - show lowercase upper
 * @r: integer
 * Description: show me
 *
 * Return: return the last number
 */
int print_last_digit(int r)
{
	int l;

	l = r % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
