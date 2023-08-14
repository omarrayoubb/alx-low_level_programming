#include <stdlib.h>
#include "main.h"
/**
 * _calloc - create
 * @size: size
 * @nmemb: helo
 * Description: i don't wanna leave you anymore
 *
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cali;
	unsigned int i;

	if (nmemb == 0 && size == 0)
		return ('\0');
	cali = malloc(nmemb * size);
	if (cali == 0)
		return ('\0');
	for (i = 0; i < nmemb; i++)
		cali[i] = 0;
	return (cali);
}
