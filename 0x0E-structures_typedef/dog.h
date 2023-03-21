#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 *
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: Long description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - type def for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
