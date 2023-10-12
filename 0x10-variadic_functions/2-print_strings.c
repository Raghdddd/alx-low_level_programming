#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - i
 *
 * @n: want
 *
 * @separator: to
 *
 * Return: know
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int l;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(string, n);

	for (l = 0; l < n; l++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (n == l + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
