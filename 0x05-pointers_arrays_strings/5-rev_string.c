#include "main.h"
#include <string.h>
/**
 *rev_string - print
 *@s: input
 *Description: print to stdout
 *
 *
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	j = strlen(s);
	for (i = 0 ; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = tmp;
	}
}
