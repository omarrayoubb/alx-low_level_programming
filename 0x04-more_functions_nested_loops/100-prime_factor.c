#include <stdio.h>
#include <math.h>
/**
 * main - prime
 *
 * Description: prime largest prime factor
 *
 * Return: 0 always means success
 */

int main(void)
{
	int i;
	long n = 612852475143;

	for (i = (int) sqrt(n); i > 2; i++)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
	

