#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 *
 * @s: input
 * @c: input
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (s + t);
	}

	return (NULL);
}
