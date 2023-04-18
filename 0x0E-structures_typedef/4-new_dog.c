#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * _strlen(name) + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
/**
 * _strlen - determine the length of a string
 * @str: the string
 * Return: integer
 */
int _strlen(char *str)
{
	int c = 0;

	if (str == NULL)
		return (c);
	while (*str)
	{
		c++;
		str++;
	}

	return (c);
}
/**
 * _strcpy - copy a string into another
 * @dest: string
 * @src: string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
