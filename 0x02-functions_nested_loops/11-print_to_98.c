#include "main.h"
#include <stdio.h>
/**
 * prin_to_98 - add 2 numbers
 * @n: first number
 * Description: add 2 numbers together m3an
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n ; i <= 98 ; i++)
		{

			if (i == 98)
				 printf("%d ", i);
			else
				printf("%d, ", i);
		}
	}
	else
	{

		for(int i = n ; i >= 98 ; i--)
		{

			 if(i == 98)
                                 printf("%d ", i);
                        else
                                printf("%d, ", i);
		}
	
	}
	printf("\n");
}
