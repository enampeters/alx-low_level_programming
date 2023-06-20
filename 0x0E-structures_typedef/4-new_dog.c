#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: string to be measure
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies @src string to @dest
 * @src: the source string
 * @dest: the destination for @src string
 *
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	buggy = malloc(sizeof(dog_t));
	if (buggy == NULL)
		return (NULL);

	buggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (buggy->name == NULL)
	{
		free(buggy);
		return (NULL);
	}

	buggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (buggy->owner == NULL)
	{
		free(buggy);
		return (NULL);
	}

	buggy->name = _strcopy(buggy->name, name);
	buggy->age = age;
	buggy->owner = _strcopy(buggy->owner, owner);

	return (buggy);
}
