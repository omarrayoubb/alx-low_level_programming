#include "main.h"
#include <stdlib.h>
/**
 * create_array - create
 * @size: input
 * @c: input
 * Description: create array and intialize it
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *buffer = (char *)malloc(sizeof(char) * size);

	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
