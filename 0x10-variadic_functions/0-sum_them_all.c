#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - imma
 *
 * @n: gangster
 *
 * Return: wife
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int k;

	va_start(valist, n);

	for (k = 0; k < n; k++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
