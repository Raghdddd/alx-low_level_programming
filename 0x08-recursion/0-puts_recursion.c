#include "main.h"

/**
 * _puts_recursion - recursive function to print to screen
 *
 * @s: string to print
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s[0]);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
