#include "main.h"
/**
 * _isupper - scans for high lettgers
 * @c: input
 * Description: scans the high letters and print them
 *
 * Return: 1 is upper 0 in lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
