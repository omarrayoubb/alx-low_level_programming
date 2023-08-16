#include "dog.h"
#include <string.h>
#include <stdlib.h>
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

	if (name == NULL || age == 0 || owner == NULL)
		return ('\0');
	new = malloc(sizeof(dog_t));
	if (new == 0)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
