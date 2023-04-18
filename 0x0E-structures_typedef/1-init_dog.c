#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
