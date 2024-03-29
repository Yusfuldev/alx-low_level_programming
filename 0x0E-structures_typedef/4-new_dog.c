#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cname, *cowner;
	int ln = 0, lo = 0, i;

	while (name[ln])
		ln++;
	while (owner[lo])
		lo++;

	new_dog = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (new_dog == NULL)
		return (NULL);

	cname = malloc(ln + 1);
	if (cname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cname[i] = name[i];
	cname[i] = '\0';

	cowner = malloc(lo + 1);
	if (cowner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		cowner[i] = owner[i];
	cowner[i] = '\0';

	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;
	return (new_dog);
}

