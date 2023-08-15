#ifndef dog_H
#define dog_H
/**
* struct dog - dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Description: dog life cycle
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
