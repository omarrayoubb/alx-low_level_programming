#include "variadic_functions.h"
/**
* print_numbers - print
* @separator: input
* @n: input
* Description: hello
*
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (; i > 0 ; i--)
	{
		int num = va_arg(args, int);

		printf("%d", num);
		if (separator != NULL && i > 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
