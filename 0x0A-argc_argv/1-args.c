#include "stdio.h"
/**
 * main - input
 * @argc: counter
 * @argv: strings
 * Description: say hello to my little friend
 *
 * Return: 0 means success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
