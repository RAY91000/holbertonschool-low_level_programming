#include "dog.h"
#include <stdlib.h>  /* Pour malloc */

/**
 * _strdup - Crée une copie d'une chaîne de caractères
 * @str: La chaîn a copier
 *
 * Return: Pointeur vers la nouvelle chaîne ou NULL si éch
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len;

	/* Si la chaîne est NULL, retourner NULL */
	if (str == NULL)
		return (NULL);

	/* Calculer la longueur de la chaîne */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allouer de la mémoire pour la nouvelle chaîne */
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	/* Copier la chaîne caractère par caractère */
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[len] = '\0'; /* Ajouter le caractère de fin de chaîne */

	return (copy);
}

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
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Allouer et copier le nom du propriétaire */
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/* Initialiser l'âge du chien */
	new_dog->age = age;

	return (new_dog);
}
