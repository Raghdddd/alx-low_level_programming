#include "main.h"
#include <stdlib.h>
/**
 * str_concat - ya gana al3inaba
 *
 * @s1: ya 3asl
 * @s2: ya zelal
 *
 * Return: you and i
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int o, c, h, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (o = 0; s1[o] != '\0'; o++)
		;

	for (c = 0; s2[c] != '\0'; c++)
		;

	strout = malloc(sizeof(char) * (o + c + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (h = 0; h < o; h++)
		strout[h] = s1[h];

	limit = c;
	for (c = 0; c <= limit; h++, c++)
		strout[h] = s2[c];

	return (strout);
}
