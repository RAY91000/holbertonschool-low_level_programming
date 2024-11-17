#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chien avec les informations spécifiées
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire
 *
 * Return: Pointeur vers le nouveau chien, ou NULL en cas d'échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_len = strlen(name) + 1; /* +1 pour le caractère nul de fin */
	owner_len = strlen(owner) + 1; /* +1 pareil */

	dog->name = malloc(name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
