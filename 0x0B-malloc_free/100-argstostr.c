#include "main.h"
#include <stdlib.h>

/**
 * argstostr - you can reciprocate
 *
 * @ac: i got what
 * @av: you need
 *
 * Return: woman
 */
char *argstostr(int ac, char **av)
{
	int q, s, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (s = 0; av[q][s]; s++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
	for (s = 0; av[q][s]; s++)
	{
		str[r] = av[q][s];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
