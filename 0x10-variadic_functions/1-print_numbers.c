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

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int m = va_arg(args, int);

		printf("%d", m);
		if (separator != '\0' && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
