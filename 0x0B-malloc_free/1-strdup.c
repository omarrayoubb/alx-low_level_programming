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
	char *std;

	if (str == NULL)
	{
		return ('\0');
	}
	std = (char *) malloc(strlen(str) + 1);
	while (str[i] != '\0')
	{
		*(std + i) = *(str + i);
		i++;
	}
	return (std);
	free(std);
}
