 #include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if succeed, 1 if fails
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *com = (char *) &i;

	return (*com);
}
