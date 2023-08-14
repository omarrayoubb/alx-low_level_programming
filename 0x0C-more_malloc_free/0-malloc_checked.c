#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - create
 * @b: size
 * Description: i don't wanna leave you anymore
 *
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
