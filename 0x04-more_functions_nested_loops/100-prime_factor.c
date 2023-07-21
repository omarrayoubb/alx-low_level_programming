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
	int i, l;
	long num = 612852475143;

	while (num % 2 == 0)
		num /= 2;
	while (num % 3 == 0)
		num /= 3;
	for (i = 5; i <= sqrt(num); i++)
	{
		while (num % i == 0)
			num /= i;
		while (num % (i + 2) == 0)
			num /= i + 2;
	}
	if (num > 4)
		l = num;
	printf("%d\n", l);
	return (0);
}
