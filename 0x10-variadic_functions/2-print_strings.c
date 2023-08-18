#include "variadic_functions.h"
#include "stdio.h"
/**
* print_strings - print
* @separator: input
* @n: input
* Description: hello
*
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
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
		char *hello = va_arg(args, char *);

		if (hello == NULL)
			printf("nil");
		else
			printf("%s", hello);
		if (separator != NULL && i > 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
