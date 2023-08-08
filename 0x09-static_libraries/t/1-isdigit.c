#include "main.h"
/**
 * _isdigit - scans for numbers
 * @c: input
 * Description: scans the numbers  and print them
 *
 * Return: 1 is number 0 in otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
