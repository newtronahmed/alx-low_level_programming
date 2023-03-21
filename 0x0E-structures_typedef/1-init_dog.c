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
	char *n;
	char *o;

	if (d)
	{
		strcpy(n, name);
		strcpy(o, owner);

		d->name = n;
		d->age = age;
		d->owner = o;
	}
}
