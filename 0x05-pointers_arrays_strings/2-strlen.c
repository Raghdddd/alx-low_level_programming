#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: input string
 *
 * Return: Lenngth of string
 */

int _strlen(char *s);
{
	int i;

	i = 0;

	while (s[i] != '\0')

	{
		i++;
	}

	return (i);
}
