#include "main.h"
/**
* read_textfile - read
* @filename: filename
* @letters: letters
* Description: read files
* Return: values
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, r;
	char *c = malloc(100 * sizeof(char));

	r = open(filename, O_RDONLY);
	if (!filename || r < 0)
		return (0);
	n = read(r, c, letters);
	if (n < 0)
		return (0);
	write(STDOUT_FILENO, c, letters);
	return (n);

}

