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
	for (; *haystack != '\0'; haystack++)
	{
		char *fu = haystack;
		char *ha = needle;

		while (*fu == *ha && *ha != '\0')
		{
			ha += 1;
			fu += 1;
		}
		if (*ha == '\0')
			return (haystack);
	}
	return (NULL);
}
