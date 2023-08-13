#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copy
 * @str: duplicated string
 * Description: copy the string
 *
 * Return: pointer to do the great job
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *std = (char *) malloc(sizeof(str));

	if (str == NULL || std == NULL)
	{
		free(std);
		return ('\0');
	}
	while (i < sizeof(str))
	{
		*(std + i) = *(str + i);
		i++;
	}
	return (std);
}
