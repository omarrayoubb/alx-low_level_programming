#include "main.h"

/**
 * _islower - show lowercase
 * @parameterc: integer
 * Description: show me 
 *
 * Return: 0 means no 1 means yes
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) 
	{
		return (1);
	}
	
	else {
		return (0);
	}
}

