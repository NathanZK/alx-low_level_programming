#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* new_dog - Creates a new dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: The new struct dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bobby;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bobby = malloc(sizeof(dog_t));
	if (bobby == NULL)
		return (NULL);

	bobby->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (bobby->name == NULL)
	{
		free(bobby);
		return (NULL);
	}
	bobby->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (bobby->owner == NULL)
	{
		free(bobby->name);
		free(bobby);
		return (NULL);
	}

	bobby->name = name;
	bobby->age = age;
	bobby->owner = owner;

	return (bobby);
}
