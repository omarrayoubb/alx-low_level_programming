#include "main.h"
#include <math.h>
#include "string.h"
#include "stdlib.h"
#include "stdio.h"
/**
* binary_to_uint - binary
* @b: input
* Description: binary to uint
* Return: i the number
*/
unsigned int binary_to_uint(const char *b)
{
	long  n, sum = 0, base = 1, x;


	if (!b)
		return (0);
	n = atoi(b);
	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		b++;
		continue;
	}
	while (n > 0)
	{
		x = n % 10;
		if (x < 0 || x > 1)
			return (0);
		sum = sum + x * base;
		base = base * 2;
		n = n / 10;
	}
	return (sum);
}
