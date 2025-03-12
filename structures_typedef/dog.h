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

/* Typedef for struct dog */
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

/**
 * print_dog - Prints the attributes of a dog structure
 * @d: Pointer to the dog structure to be printed
 *
 * Description: This function prints the attributes of a dog, including
 * its name, age, and owner's name. If any of the attributes are NULL,
 * it prints (nil) instead.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to a string containing the dog's name
 * @age: Age of the dog in years
 * @owner: Pointer to a string containing the owner's name
 *
 * Return: Pointer to the newly allocated dog structure, or NULL on failure
 *
 * Description: This function dynamically allocates memory for a new dog
 * structure and initializes it with the given name, age, and owner.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 *
 * Description: This function frees the memory allocated for a dog
 * structure, including the memory for the name and owner strings.
 */
void free_dog(dog_t *d);


#endif
