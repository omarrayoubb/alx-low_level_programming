#include "main.h"
/**
 * times_table - time table
 *
 * Description: timetable for 099
 *
 */
void times_table(void)
{
	int i = 0, j = 0, n = 0 ;

	while (i < 10)
	{
		j = 0;
		n = 0;
		while (j < 10)
		{
			n += i;
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
