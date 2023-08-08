#include "main.h"
/**
 * _memset - pi
 * @s: input
 * @b: input
 * @n: input
 * Description: change the content of an array
 *
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
