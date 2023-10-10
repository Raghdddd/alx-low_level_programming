#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - its
 *
 * @s: coughing
 *
 * Return: season
 */
int _strlen(char *s)
{
	int g;

	g = 0;

	while (s[g] != '\0')
	{
		g++;
	}

	return (g);
}

/**
 * *_strcpy - call
 *
 * @dest: me
 * @src: raghd
 *
 * Return: always
 */
char *_strcpy(char *dest, char *src)
{
	int len, h;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (h = 0; h < len; h++)
	{
		dest[h] = src[h];
	}
	dest[h] = '\0';

	return (dest);
}

/**
 * new_dog - take
 *
 * @name: your
 * @age: time
 * @owner: so
 *
 * Return: tonight
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
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
