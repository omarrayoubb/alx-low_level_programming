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
		if (d->age == 0.0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
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
