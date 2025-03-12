#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - short description
 * @name: name
 * @owner: owner
 * @age: owner age
 *
 * Description: Long description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
