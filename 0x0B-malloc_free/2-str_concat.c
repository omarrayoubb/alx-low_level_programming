#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concat
 *
 * @s1: first string
 * @s2: second string
 * Description: concat the 2 string
 *
 * Return: pointer to do the great job
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = strlen(s1);
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	if (concat == 0)
		return ('\0');
	for (i = 0; i < strlen(s1); i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i <= strlen(s2) && j <= strlen(s1) + strlen(s2); i++, j++)
	{
		concat[j] = s2[i];
	}
	return (concat);
}
