#include <stddef.h>
#include "dog.h"

/**
 *new_dog - create a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer to the newly created dog(SUCCESS)
 *NULL if insufficient memory was available
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t, n_dog, *n_dog_ptr;

	n_dog_name = name;
	n_dog_age = age;
	n_dog_owner = owner;

	n_dog_ptr = &n_dog;

	return (n_dog_ptr);
}
