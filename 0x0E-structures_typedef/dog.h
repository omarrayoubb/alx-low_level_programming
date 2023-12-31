#ifndef dog_H
#define dog_H
typedef struct dog dog_t;
/**
* struct dog - dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Description: dog life cycle
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
