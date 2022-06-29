#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int i, nlen = 0, olen = 0;

	while (name[nlen])
		nlen++;
	while (owner[olen])
		olen++;
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = malloc(sizeof(char) * (nlen + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->owner = malloc(sizeof(char) * (olen + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	dog1->age = age;
	for (i = 0; name[i]; i++)
		dog1->name[i] = name[i];
	dog1->name[i] = '\0';
	for (i = 0; owner[i]; i++)
		dog1->owner[i] = owner[i];
	dog1->owner[i] = '\0';
	return (dog1);
}
