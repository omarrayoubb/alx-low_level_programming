#include "variadic_functions.h"
#include "stdarg.h"
/**
* sum_them_all - sum
* @n: input
* Description: return the sum of the number
*
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
