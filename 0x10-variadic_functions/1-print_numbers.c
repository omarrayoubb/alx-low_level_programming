#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"
/**
* print_numbers - print
* @separator: input
* @n: input
* Description: return the sum of the number
*
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int m = va_arg(args, int);

		printf("%d", m);
		if (i < n - 1)
		{
			if (separator != '\0')
				printf("%s", separator);
		}
		else
		{
			printf("\n");
		}
	}
}
