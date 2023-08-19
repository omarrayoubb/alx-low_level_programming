#include "function_pointers.h"
/**
* print_name - print
*@name: input
*@f: function
*Description: print the whole name
*
*
*/
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
