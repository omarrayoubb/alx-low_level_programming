#include "variadic_functions.h"
/**
* print_all - print
* @format: input
* Description: print all strings
*
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0, n, c;
	char *nc;
	double omar;
	const char *mm = {"cfis"};

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'f':
				omar = va_arg(args, double), printf("%f", omar);
				break;
			case 'c':
				c = va_arg(args, int), printf("%c", c);
				break;
			case 'i':
				n = va_arg(args, int), printf("%d", n);
				break;
			case 's':
				nc = va_arg(args, char *);
				if (nc != NULL)
				{
					printf("%s", nc);
					break;
				}
				printf("(nill)");
				break;
		} j = 0;
		while (mm[j])
		{
			if (format[i] == mm[j])
			{
				printf(", ");
				break;
			} j++;
		} i++;
	}
	printf("\n"), va_end(args);
}
