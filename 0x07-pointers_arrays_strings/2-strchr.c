#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr - char
 * @s: input
 * @c: input
 * Description: find the char
 *
 * Return: s the address of the cha
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
