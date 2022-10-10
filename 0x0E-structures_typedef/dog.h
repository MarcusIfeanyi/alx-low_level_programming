#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The structure data structure.
 * @name: name of the object or structure(dog)
 * @age: age of the object or structure(dog)
 * @owner: owner of the object(dog)
 */
struct dog
{
	char *name;
	char *owner;
	float age;

	struct dog my_dog;
}
