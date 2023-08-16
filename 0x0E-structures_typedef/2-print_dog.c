#include "dog.h"
#include <stdio.h>
/**
*print_dog - print
*@d: dog
*Description: print information about this dog
*
*
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		printf("Owner: ");

		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->owner);
		}

	}
}
