#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
* print_all - print
* @format: input
* Description: print all strings
*
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *nc;
	const char *mm = {"cfis"};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'c':
				printf("%c", va_args(args, int));
				break;
			case 'i':
				printf("%d", va_args(args, int));
				break;
			case 's':
				nc = va_arg(args, char *);
				if (nc != NULL)
					printf("%s", nc);
				else
					printf("(nill)");
				break;
		}
		while (j < 4)
		{
			if (format[i] == mm[j] && format[i + 1] != 0)
			{
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n"), va_end(args);
}


