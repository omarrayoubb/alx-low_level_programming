#include "variadic_functions.h"
/**
* print_strings - print
* @separator: input
* @n: input
* Description: call the strings
*
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (; i > 0; i--)
	{
		char *hello = va_arg(args, char *);

		if (hello == '\0')
			printf("nil");
		else
			printf("%s", hello);
		if (separator != '\0' && i > 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
