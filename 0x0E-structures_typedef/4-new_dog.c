#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include "stdio.h"
/**
* new_dog - print
* @name: name
* @age: age
* @owner: owner
*Description: new dooooog
*
*Return: the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	printf("hello");

	if (name == NULL || age == 0 || owner == NULL)
		return ('\0');
	new = malloc(sizeof(dog_t));
	if (new == 0)
		return (NULL);
	new->name = malloc(sizeof(*name) * strlen(name) + 1);
	if (new->name == 0)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(*name) * strlen(owner) + 1);
	if (new->owner == 0)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
