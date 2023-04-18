#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - define a  dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: define a dog's name, age and it's owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* function that prints a struct dog */
void print_dog(struct dog *d);
/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;
/* function that creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);
/* determine the length of a string */
int _strlen(char *str);
/* function that frees dogs. */
void free_dog(dog_t *d);

#endif /* #ifndef _DOG_H */
