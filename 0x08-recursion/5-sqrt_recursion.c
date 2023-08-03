#include "main.h"
int square(int n, int y);
/**
 * _sqrt_recursion - print
 * @n: input
 * Description: hello
 *
 * Return: factorial
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - print
 * @n: input
 * @y: input
 * Description: square
 *
 * Return: square
 */
int square(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (square(n, y + 1));
	else
		return (-1);

}
