#include "main.h"
/**
 * swap_int - swap
 * @a: first number
 * @b: second number
 * Description: swap 2 numbers
 *
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
