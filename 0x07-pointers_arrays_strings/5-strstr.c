#include "main.h"
#include "string.h"
#define NULL ((void *)0)
/**
 * _strstr - input
 * @haystack: input
 * @needle: got
 * Description: hello world
 *
 * Return: s
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, b, e;

	b = strlen(haystack);
	e = strlen(needle);
	for (i = 0 ; i < e; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (haystack[i] == needle[i])
			{
			if (j >= e)
				return (haystack + i);
		}
			else
				break;
			}
	}
	return (NULL);
}
