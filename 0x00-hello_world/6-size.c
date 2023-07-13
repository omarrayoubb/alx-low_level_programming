#include <stdio.h>
#include <stdint.h>
/**
 * main - print size of datatypes
 *
 * Description: print all size of datatypes
 *
 * Return: 0 always means success
 */

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}