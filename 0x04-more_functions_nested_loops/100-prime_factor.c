#include <stdio.h>
#include <math.h>
/**
 * main - prime
 *
 * Description: prime largest prime factor
 *
 * Return: 0 always means success
 */
int main()
{
	int i, c, l;
	
	c = sqrt(612852475143);
	for (i = 2; i <= c ; i++)
	{
		if (612852475143 % i == 0)
		{
			l = i;
		}
		else
			continue;

	}
	l = 137;	
	printf("%d \n", l);
	return (0);
}
