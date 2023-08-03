#include "main.h"
/**
 * _sqrt_recursion - print
 * @n: input
 * Description: hello
 *
 * Return: factorial
 */
int square(int n, int y);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
int square(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (square(n, y + 1));
	else
		return (0);

}
