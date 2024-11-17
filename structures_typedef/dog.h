#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure pour représenter un chien
 * @name: Nom du chien (type char *)
 * @age: Âge du chien (type float)
 * @owner: Propriétaire du chien (type char *)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

