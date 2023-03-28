#include "main.h"
/**
 * _strlen - gives the length of a string
 * @str: string to be measured
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
