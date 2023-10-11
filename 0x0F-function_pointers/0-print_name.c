#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - say
 *
 * @name: my
 *
 * @f: name
 *
 * Return: RAGHD
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
