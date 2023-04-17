#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the lengttt
 * @s: stringgg
 *
 * Return: lenghttt
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}

/**
 * *_strcpy - copyy the string
 * @dest: pointer
 * @src: string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int leng, l;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (l = 0; l < leng; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: name of dddog
 * @age: age of ddddog
 * @owner: owner of dddog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenn1, lenn2;

	lenn1 = _strlen(name);
	lenn2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenn1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lenn2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
