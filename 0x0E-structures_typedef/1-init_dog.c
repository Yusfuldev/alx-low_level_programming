#include "dog.h"
#include <stdlib.h>
/**
 * int_dog- initializes struct dog
 * @d: pointer to struct to initialise
 * @name: dog's name
 * @age: dog's age
 * @owner: dog.s owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
