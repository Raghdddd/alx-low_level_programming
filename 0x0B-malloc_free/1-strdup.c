#include "main.h"
#include <stdlib.h>
/**
 * _strdup - he tell
 *
 * @str: girl ur the best
 *
 * Return: but i already know who what im
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int a, g;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	strout = (char *)malloc(sizeof(char) * (a + 1));

	if (strout == NULL)
		return (NULL);

	for (g = 0; g <= a; g++)
		strout[g] = str[g];

	return (strout);
}
