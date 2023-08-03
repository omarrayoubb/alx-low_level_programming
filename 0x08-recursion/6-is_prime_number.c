#include "main.h"
int prime(int n, int y);
/**
 * is_prime_number - print
 * @n: input
 * Description: hello world
 *
 * Return: successful
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - input
 * @n: input
 * @y: hello
 * Description: print hello
 *
 * Return: success
 */
int prime(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n <= 1 || n % y == 0)
		return (0);

	return (prime(n, y + 1));

}
