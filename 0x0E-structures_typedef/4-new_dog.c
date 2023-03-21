#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 *
 * @name: string,
 * @age: number,
 * @owner: string,
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int size_n, size_o, i;

	newdog = malloc(sizeof(*newdog));

	if (newdog == NULL || !name || !owner)
	{
		free(newdog);
		return (NULL);
	}
	size_n = 0;
	while (*name != '\0')
	{
		size_n++;
		name++;
	}
	size_o = 0;
	while (*owner != '\0')
	{
		owner++;
		size_o++;
	}
	newdog->name = malloc(size_n + 1);
	newdog->owner = malloc(size_o + 1);
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < size_n; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';
	for (i = 0; i < size_o; i++)
		newdog->owner[i] = name[i];
	newdog->name[i] = '\0';
	newdog->age = age;
	return (newdog);
}
