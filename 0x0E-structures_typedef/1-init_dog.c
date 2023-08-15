#include "dog.h"
/**
*init_dog - init
*@d: dog
*@name: name of the dog
*@age: age of him
*@owner: the owner of the dog
*Description: information about the dog
*
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
