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
	int sum = 0, j = n;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (j--)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
