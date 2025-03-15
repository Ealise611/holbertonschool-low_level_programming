#ifndef DOG_H
#define DOG_H

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

/* Typedef for struct dog*/
typedef struct dog dog_t;

/*function prototypes*/

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure to be initialized
 * @name: Pointer to a string containing the dog's name
 * @age: Age of the dog in years
 * @owner: Pointer to a string containing the owner's name
 *
 * Description: This function initializes a struct dog variable with
 * the provided name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
