#include <stdlib.h>

/**
 * int_index - wa 
 *
 * @array: inta
 *
 * @size: hteghi
 *
 * @cmp: hina
 *
 * Return: bl3afys
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; u < size; u++)
		if (cmp(array[u]))
			return (u);

	if (u == size)
		return (-1);

	return (-1);
}
