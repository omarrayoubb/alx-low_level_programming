#include "main.h"
/**
* get_bit - input
* @n: input
* @index: input
* Description: hello world
* Return: index or -1 if error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int current;

	if (n == 0)
		return (0);
	else if (index == 0)
		return (n & 1);
	else if (index > 63)
		return (-1);
	current = n >> index;
	return (current & 1);

}
