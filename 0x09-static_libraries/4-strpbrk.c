#include "main.h"
#include "string.h"
#define NULL ((void *)0)
/**
 * _strpbrk - input
 * @s: input
 * @accept: got
 * Description: hello world
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, b, e;

	b = strlen(s);
	e = strlen(accept);
	for (i = 0 ; i < b; i++)
	{
		for (j = 0; j < e; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
