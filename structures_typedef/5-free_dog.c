#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libèe la mémoire allouée pour un czn
 * @d: Le chien a libéer
 *
 * Retourne rien. Cette fonction libère la mémoire allouéour
 * le nom et le propriétaire d'un chien, ainsi que pour lastructure
 * elle-même.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
