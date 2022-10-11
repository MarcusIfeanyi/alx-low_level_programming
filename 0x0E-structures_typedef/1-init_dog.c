#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize dog attribut
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the  dog
 * @owner: name of the dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	name = d->name;
	age = d->age;
	owner = d->owner;
	}
}
