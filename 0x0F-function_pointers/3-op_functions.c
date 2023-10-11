#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - mr
 *
 * @a: lava
 * @b: lava
 *
 * Return: fantastic
 */
int op_add(int v, int n)
{
	return (v + n);
}

/**
 * op_sub - i
 *
 * @a: used
 * @b: to
 *
 * Return: say
 */
int op_sub(int v, int n)
{
	return (v - n);
}

/**
 * op_mul - hoy
 *
 * @a: ha
 * @b: ya ita
 *
 * Return: ha
 */
int op_mul(int v, int n)
{
	return (v * n);
}

/**
 * op_div - i
 *
 * @a: mean
 * @b: i dont
 *
 * Return: even know
 */
int op_div(int v, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (v / n);
}

/**
 * op_mod - keep 
 *
 * @a: it
 * @b: out
 *
 * Return: its me
 */
int op_mod(int v, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (v % n);
}
