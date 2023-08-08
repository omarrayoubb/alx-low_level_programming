#include "main.h"

/**
 * _isalpha - show lowercase upper
 * @c: integer
 * Description: show me
 *
 * Return: 0 means no 1 means yes
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}

