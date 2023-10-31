#include "main.h"

/**
 * create_file - traet
 *
 * @filename: me 
 *
 * @text_content: clike
 *
 * Description: why
 *
 * Return: trees
 */

int create_file(const char *filename, char *text_content)
{
	int r = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[r] != '\0')
	{
		r++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, r);

	return (1);
}
