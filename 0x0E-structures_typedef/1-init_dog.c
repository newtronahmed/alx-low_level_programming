#include "dog.h"
/**
 * init_dog - intialize dog struct
 *
 * @d: struct pointer,
 * @name: string,
 * @age: number,
 * @owner: string
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
