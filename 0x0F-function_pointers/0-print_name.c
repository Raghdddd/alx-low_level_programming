#include "function_pointers.h"

/**
 * print_name - so 
 *
 * @name: i cut
 *
 * @f: you
 *
 * Return: off
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
