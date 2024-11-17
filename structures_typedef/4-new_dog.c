#include "dog.h"
#include <stdlib.h>  /* Pour malloc */
#include <string.h>

/**
 * new_dog - Crée un nouveau chien avec les paramètres donnés
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le propriétaire du chien
 *
 * Return: Pointeur vers le nouveau chien (dog_t), ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allouer de la mémoire pour un nouveau chien */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allouer et copier le nom du chien */
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	/* Allouer et copier le nom du propriétaire */
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	/* Initialiser l'âge du chien */
	new_dog->age = age;

	return (new_dog);
}
