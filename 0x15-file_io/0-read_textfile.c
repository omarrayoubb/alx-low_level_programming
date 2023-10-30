#include "main.h"
#include "string.h"
/**
* read_textfile - read
* @filename: filename
* @letters: letters
* Description: read files
* Return: values
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, r, w;
	char *c = malloc(sizeof(char) * letters);

	r = open(filename, O_RDONLY);
	if (!filename || r < 0)
		return (0);
	n = read(r, c, letters);
	if (n < 0)
		return (0);
	w = write(STDOUT_FILENO, c, strlen(c));
	if (w != n)
		return (0);
	close(r);
	return (w);
}

