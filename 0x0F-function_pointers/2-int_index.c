#include "function_pointers.h"
/**
* int_index - index return
* @array: array
* @size: size of the array
* @cmp: comparison function
* Description: return the index of the first appearance
*
* Return: index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int index = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		index = cmp(array[i]);
		if (index > 0)
			break;
	}
	if (index == 0)
		return (-1);
	return (i);
}
