#include "function_pointers.h"
/**
* array_iterator - print
* @array: input
* @size: input
* @action: function
*Description: print the indexe
*
*
*/
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	if (!array || !size || !action)
		return;
	for (; i < size; i++)
		action(array[i]);
}
