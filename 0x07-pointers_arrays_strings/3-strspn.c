#include "main.h"
#include <string.h>
/**
 * _strspn - char
 * @s: input
 * @accept: input
 * Description: find the char
 *
 * Return: s the address of the cha
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, m, v;

	m = strlen(s);
	v = strlen(accept);
	for (i = 0 ; i < m ; i++)
	{
		for (j = 0; accept[j] != s[i] ; j++)
		{
			if (j >= v)
				return (i);
		}

	}
	return (i);

}
