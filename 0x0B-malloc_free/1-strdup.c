#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy
 * @str: duplicated string
 * Description: copy the string
 *
 * Return: pointer to do the great job
 */
char *_strdup(char *str)
{
	unsigned int x = sizeof(str), i = 0;
	char *std = (char *) malloc(sizeof(char) * x);

	if (str == NULL)
		return ('\0');
	while (i < x)
	{
		*(std + i) = *(str + i);
		i++;
	}
	return (std);
}
