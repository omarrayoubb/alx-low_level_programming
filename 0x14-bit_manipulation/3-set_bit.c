#include "main.h"
/**
* set_bit - input
* @n: input
* @index: input
* Description: hello world
* Return: index or -1 if error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int current;

	if (index == 0)
	{
		*n = *n | 1;
		return (1);
	}
	else if (index > 63)
		return (-1);
	current = 1 << index;
	*n = *n | current;
	return (1);

}
