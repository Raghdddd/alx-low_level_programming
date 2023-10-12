#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - how
 *
 * @a: to
 * @b: keeo
 *
 * Return: it clear
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - we
 *
 * @a: got
 * @b: be
 *
 * Return: always
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - rich
 *
 * @a: digga
 * @b: thats
 *
 * Return: my type
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - every
 *
 * @a: day
 * @b: is
 *
 * Return: my bd
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - welcom
 *
 * @a: to
 * @b: this
 *
 * Return: money
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
