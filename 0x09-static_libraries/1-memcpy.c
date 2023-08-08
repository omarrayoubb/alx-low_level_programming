#include "main.h"
/**
 * _memcpy - pi
 * @dest: input
 * @src: input
 * @n: input
 * Description: copy the content of an array
 *
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
