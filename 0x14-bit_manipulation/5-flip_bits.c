#include "main.h"
/**
* flip_bits - flip
* @n: input
* @m: input
* Description: hello
* Return: number of flip bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, i, j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j ; i++)
	{
		if ((m & 1) != (n & 1))
			bits++;
	
		n = n >> 1;
		m = m >> 1;
	}
	return (bits);
}
