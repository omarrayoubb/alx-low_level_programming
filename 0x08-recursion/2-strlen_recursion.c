#include "main.h"
/**
 * _strlen_recursion - print
 * @s: input
 * Descriptions: print all
 *
 *Return: numbers of letters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
