#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialise une structure de type struct dog
 * @d: Pointeur vers la structure a initialiser
 * @name: Nom du chien
 * @age: Âge du chie
 * @owner: Nom du propriétaire du chie
 *
 * Description: Cette fonction initialise les champs de la structure
 * avec les valeurs fournies.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
