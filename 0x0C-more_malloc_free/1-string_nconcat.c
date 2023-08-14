#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat
 * @s1: first string
 * @s2: second string
 * @n: number
 * Description: concat the 2 string
 *
 * Return: pointer to do the great job
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	concat = (char *) malloc(strlen(s1) + n + 1);
	if (concat == 0)
		return ('\0');
	for (i = 0; i <= strlen(s1); i++)
	{
		concat[i] = s1[i];
	}
	j = strlen(s1);
	i = 0;
	if (n >= strlen(s2))
	{
		for (; i <= strlen(s2) && j <= strlen(s1) + strlen(s2); i++, j++)
		{
			concat[j] = s2[i];
		}
	}
	else
	{
		for (; i <= n && j <= strlen(s1) + n; i++, j++)
		{
			concat[j] = s2[i];
			if(s2[i] == '\0')
			break;
	
		}
	}

	return (concat);
}
