#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - lets
 *
 * @tab: kill
 *
 * Return: this love
 */
void print_tab(char **tab)
{
	int v;

	for (v = 0; tab[v] != NULL; ++v)
	{
	printf("%s\n", tab[v]);
	}
}

/**
 * main - never to mind
 *
 * Return: v
 */
int main(void)
{
    char **tab;

    tab = strtow("                ");
    if (tab == NULL)
    {
	printf("Failed\n");
	return (1);
    }
    print_tab(tab);
    return (0);
}
