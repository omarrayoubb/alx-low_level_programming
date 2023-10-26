#include "main.h"
/**
* clear_bit - input
* @n: input
* @index: input
* Description: hello world
* Return: index or -1 if error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int current;

	if (index > 63)
		return (-1);
	current = 1 << index;
	*n = *n & (~current);
	return (1);


}
