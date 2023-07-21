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
	long int i, n = 612852475143, l;

	for (i = 2 ; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			l = i;
			while (n % i == 0)
				n /= i;
		}
	}
	printf("%ld \n", l);
	return (0);
}

